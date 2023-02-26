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
    // static lv_style_t style;
    // lv_style_init(&style);

    // lv_style_set_radius(&style, 3);

    // lv_style_set_bg_opa(&style, LV_OPA_100);
    // lv_style_set_bg_color(&style, lv_palette_main(LV_PALETTE_RED));
    // lv_style_set_bg_grad_color(&style, lv_palette_darken(LV_PALETTE_RED, 2));
    // lv_style_set_bg_grad_dir(&style, LV_GRAD_DIR_NONE);

    // lv_style_set_border_opa(&style, LV_OPA_40);
    // lv_style_set_border_width(&style, 2);
    // lv_style_set_border_color(&style, lv_palette_main(LV_PALETTE_GREY));

    // lv_style_set_shadow_width(&style, 8);
    // lv_style_set_shadow_color(&style, lv_palette_main(LV_PALETTE_GREY));
    // lv_style_set_shadow_ofs_y(&style, 8);

    // lv_style_set_outline_opa(&style, LV_OPA_COVER);
    // lv_style_set_outline_color(&style, lv_palette_main(LV_PALETTE_RED));

    // lv_style_set_text_color(&style, lv_color_white());
    // lv_style_set_pad_all(&style, 10);

    // lv_obj_t * btn = lv_btn_create(lv_scr_act());     /*Add a button the current screen*/
    // lv_obj_remove_style_all(btn);                          /*Remove the style coming from the theme*/
    // lv_obj_add_style(btn, &style, 0);
    // //lv_obj_set_pos(btn, 10, 10);                            /*Set its position*/
    // lv_obj_align(btn,LV_ALIGN_CENTER,0,0);
    // lv_obj_set_size(btn, 120, 50);                          /*Set its size*/

    // lv_obj_t * label = lv_label_create(btn);          /*Add a label to the button*/
    // lv_obj_align(label,LV_ALIGN_CENTER,0,0);
    // lv_label_set_text(label, "Button");                     /*Set the labels text*/

    lv_obj_t * cw;

    cw = lv_colorwheel_create(lv_scr_act(), true);
    lv_obj_set_size(cw, 200, 200);
    lv_obj_center(cw);
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
