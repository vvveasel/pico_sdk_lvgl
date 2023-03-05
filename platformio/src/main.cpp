#include <stdio.h>
#include "config/lvgl_adapter.h"
#include "tft_driver.h"
#include "touch_driver.h"
#include "misc/io.h"
#include "lvgl.h"
#include "misc/elapsed.h"
#include "misc/memory.h"
#include "pico/stdlib.h"

constexpr uint8_t kColor8Blue = 0x3;

// TODO: move the lvgl tick timer to the lv_adapter file.

static Elapsed elapsed_from_last_dump;

static repeating_timer_t lvgl_ticker;

// LVGL time ticks IRQ.
static bool timer_callback(repeating_timer_t* rt) {
  lv_tick_inc(5);
  return true;  // keep repeating
}

static void lvgl_test(void)
{
      /*Init the style for the default state*/
    static lv_style_t style1;
    static lv_style_t style2;
    static lv_style_t style3;
    static lv_style_t style4;
    static lv_style_t style5;

    lv_style_init(&style1);
    lv_style_init(&style2);
    lv_style_init(&style3);
    lv_style_init(&style4);
    lv_style_init(&style5);

    lv_style_set_bg_color(&style1, lv_color_make(255, 0, 0));
    lv_style_set_text_color(&style1, lv_color_white());
    lv_style_set_bg_opa(&style1, LV_OPA_100);

    lv_style_set_bg_color(&style2, lv_color_make(0, 255, 0));
    lv_style_set_text_color(&style2, lv_color_white());
    lv_style_set_bg_opa(&style2, LV_OPA_100);

    lv_style_set_bg_color(&style3, lv_color_make(0, 0, 255));
    lv_style_set_text_color(&style3, lv_color_white());
    lv_style_set_bg_opa(&style3, LV_OPA_100);

    lv_style_set_bg_color(&style4, lv_color_make(255, 255, 255));
    lv_style_set_text_color(&style4, lv_color_black());
    lv_style_set_bg_opa(&style4, LV_OPA_100);

    lv_style_set_bg_color(&style5, lv_color_make(0, 0, 0));
    lv_style_set_text_color(&style5, lv_color_white());
    lv_style_set_bg_opa(&style5, LV_OPA_100);



    lv_obj_t * btn1 = lv_btn_create(lv_scr_act());     /*Add a button the current screen*/
    lv_obj_remove_style_all(btn1);                          /*Remove the style coming from the theme*/
    lv_obj_add_style(btn1, &style1, 0);
    lv_obj_align(btn1,LV_ALIGN_TOP_LEFT,0,0);
    lv_obj_set_size(btn1, 120, 50);                          /*Set its size*/
    lv_obj_t * label1 = lv_label_create(btn1);          /*Add a label to the button*/
    lv_obj_align(label1,LV_ALIGN_CENTER,0,0);
    lv_label_set_text(label1, "RED");                     /*Set the labels text*/

    lv_obj_t * btn2 = lv_btn_create(lv_scr_act());     /*Add a button the current screen*/
    lv_obj_remove_style_all(btn2);                          /*Remove the style coming from the theme*/
    lv_obj_add_style(btn2, &style2, 0);
    lv_obj_align(btn2,LV_ALIGN_TOP_RIGHT,0,0);
    lv_obj_set_size(btn2, 120, 50);                          /*Set its size*/
    lv_obj_t * label2 = lv_label_create(btn2);          /*Add a label to the button*/
    lv_obj_align(label2,LV_ALIGN_CENTER,0,0);
    lv_label_set_text(label2, "GREEN");                     /*Set the labels text*/

    lv_obj_t * btn3 = lv_btn_create(lv_scr_act());     /*Add a button the current screen*/
    lv_obj_remove_style_all(btn3);                          /*Remove the style coming from the theme*/
    lv_obj_add_style(btn3, &style3, 0);
    lv_obj_align(btn3,LV_ALIGN_BOTTOM_LEFT,0,0);
    lv_obj_set_size(btn3, 120, 50);                          /*Set its size*/
    lv_obj_t * label3 = lv_label_create(btn3);          /*Add a label to the button*/
    lv_obj_align(label3,LV_ALIGN_CENTER,0,0);
    lv_label_set_text(label3, "BLUE");                     /*Set the labels text*/

    lv_obj_t * btn4 = lv_btn_create(lv_scr_act());     /*Add a button the current screen*/
    lv_obj_remove_style_all(btn4);                          /*Remove the style coming from the theme*/
    lv_obj_add_style(btn4, &style4, 0);
    lv_obj_align(btn4,LV_ALIGN_BOTTOM_RIGHT,0,0);
    lv_obj_set_size(btn4, 120, 50);                          /*Set its size*/
    lv_obj_t * label4 = lv_label_create(btn4);          /*Add a label to the button*/
    lv_obj_align(label4,LV_ALIGN_CENTER,0,0);
    lv_label_set_text(label4, "WHITE");                     /*Set the labels text*/

    lv_obj_t * btn5 = lv_btn_create(lv_scr_act());     /*Add a button the current screen*/
    lv_obj_remove_style_all(btn5);                          /*Remove the style coming from the theme*/
    lv_obj_add_style(btn5, &style5, 0);
    lv_obj_align(btn5,LV_ALIGN_CENTER,0,0);
    lv_obj_set_size(btn5, 120, 50);                          /*Set its size*/
    lv_obj_t * label5 = lv_label_create(btn5);          /*Add a label to the button*/
    lv_obj_align(label5,LV_ALIGN_CENTER,0,0);
    lv_label_set_text(label5, "BLACK");                     /*Set the labels text*/

}

static Elapsed timer;

void setup() {
  stdio_init_all();

  io::setup();

  LED0_ON;

  touch_driver::setup();

  // ver.begin();

  lvgl_adapter::setup();

  const bool timer_ok =
      add_repeating_timer_ms(5, timer_callback, NULL, &lvgl_ticker);

  // Render the test page.
  lvgl_test();
  // lv_task_handler();
  lv_refr_now(NULL);
  sleep_ms(30);  // let the screen process the data to avoid initial flicker.

  // Turn on the backlight. User can now see the screen.
  lvgl_adapter::set_backlight(BRIGHTNESS_DEFAULT);
  // millis_to_first_screen = to_ms_since_boot(get_absolute_time());

}

void loop() {
  // LVGL processing and rendering.
  lv_task_handler();

  // Heartbeat.
  if (to_ms_since_boot(get_absolute_time()) % 1000 < 50) {
    LED0_ON;
  } else {
    LED0_OFF;
  }

  // Periodic report over USB/Serial. For debugging.
  if (elapsed_from_last_dump.elapsed_millis() > 3000) {
    elapsed_from_last_dump.reset();

    static uint print_cycle = 0;

    switch (print_cycle) {
      default:
      case 0:
        printf("\nFree memory: %d\n", memory::free_memory());
        puts("Pico SDK version: " PICO_SDK_VERSION_STRING);
        print_cycle = 1;
        break;
      case 1:
        printf("\n");
        lvgl_adapter::dump_stats();
        print_cycle = 2;
        break;
      case 2:
        printf("\n");
        print_cycle = 0;
        break;
    }
  }
}

// Arduino like main.
int main() {
  setup();
  for (;;) {
    loop();
  }
}
