#include "lvgl.h"

/*******************************************************************************
 * Size: 50 px
 * Bpp: 4
 * Opts: 
 ******************************************************************************/

#ifndef FONT_MONTSERRAT_NUMERIC_50
#define FONT_MONTSERRAT_NUMERIC_50 1
#endif

#if FONT_MONTSERRAT_NUMERIC_50

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+2B "+" */
    0x0, 0x0, 0x0, 0x0, 0x3, 0x77, 0x74, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x8f, 0xff, 0xa0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x8, 0xff, 0xfa, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8f,
    0xff, 0xa0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x8, 0xff, 0xfa, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8f, 0xff,
    0xa0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x8, 0xff, 0xfa, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x8f, 0xff, 0xa0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x8, 0xff, 0xfa, 0x0, 0x0, 0x0, 0x0, 0x4,
    0x77, 0x77, 0x77, 0x77, 0xcf, 0xff, 0xc7, 0x77,
    0x77, 0x77, 0x75, 0xaf, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xca, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfc, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc5, 0x88, 0x88,
    0x88, 0x88, 0xcf, 0xff, 0xd8, 0x88, 0x88, 0x88,
    0x86, 0x0, 0x0, 0x0, 0x0, 0x8, 0xff, 0xfa,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x8f, 0xff, 0xa0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x8, 0xff, 0xfa, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x8f, 0xff, 0xa0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x8, 0xff, 0xfa, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8f,
    0xff, 0xa0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x8, 0xff, 0xfa, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8f, 0xff,
    0xa0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3, 0x77, 0x74, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+2C "," */
    0x0, 0x47, 0x61, 0x0, 0xaf, 0xff, 0xe2, 0x4f,
    0xff, 0xff, 0xb8, 0xff, 0xff, 0xfe, 0x8f, 0xff,
    0xff, 0xe2, 0xff, 0xff, 0xfc, 0x5, 0xef, 0xff,
    0x70, 0xa, 0xff, 0xf2, 0x0, 0xef, 0xfc, 0x0,
    0x2f, 0xff, 0x70, 0x6, 0xff, 0xf1, 0x0, 0xaf,
    0xfc, 0x0, 0xd, 0xff, 0x70, 0x1, 0xff, 0xf1,
    0x0, 0x16, 0x65, 0x0, 0x0,

    /* U+2D "-" */
    0x1c, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x32,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x2f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x42, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x5, 0x55,
    0x55, 0x55, 0x55, 0x55, 0x55, 0x10,

    /* U+2E "." */
    0x0, 0x47, 0x61, 0x0, 0xaf, 0xff, 0xe2, 0x6f,
    0xff, 0xff, 0xba, 0xff, 0xff, 0xfe, 0x9f, 0xff,
    0xff, 0xe4, 0xff, 0xff, 0xf8, 0x6, 0xff, 0xfa,
    0x0, 0x1, 0x32, 0x0,

    /* U+30 "0" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x45, 0x65,
    0x41, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1, 0x7d, 0xff, 0xff, 0xff, 0xfd,
    0x71, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1c, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x10,
    0x0, 0x0, 0x0, 0x0, 0x1d, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x10, 0x0,
    0x0, 0x0, 0xd, 0xff, 0xff, 0xff, 0xa4, 0x21,
    0x24, 0xaf, 0xff, 0xff, 0xfd, 0x0, 0x0, 0x0,
    0x9, 0xff, 0xff, 0xfb, 0x10, 0x0, 0x0, 0x0,
    0x1b, 0xff, 0xff, 0xf9, 0x0, 0x0, 0x3, 0xff,
    0xff, 0xfa, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa,
    0xff, 0xff, 0xf3, 0x0, 0x0, 0xbf, 0xff, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xc, 0xff,
    0xff, 0xb0, 0x0, 0x2f, 0xff, 0xff, 0x20, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x2f, 0xff, 0xff,
    0x20, 0x9, 0xff, 0xff, 0xa0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xaf, 0xff, 0xf8, 0x0,
    0xef, 0xff, 0xf4, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x4, 0xff, 0xff, 0xd0, 0x2f, 0xff,
    0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xe, 0xff, 0xff, 0x15, 0xff, 0xff, 0xb0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xbf, 0xff, 0xf5, 0x8f, 0xff, 0xf8, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8, 0xff,
    0xff, 0x7a, 0xff, 0xff, 0x50, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x5f, 0xff, 0xfa,
    0xbf, 0xff, 0xf4, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x4, 0xff, 0xff, 0xbc, 0xff,
    0xff, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x4f, 0xff, 0xfc, 0xcf, 0xff, 0xf3,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0xff, 0xff, 0xcc, 0xff, 0xff, 0x40, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4f,
    0xff, 0xfc, 0xbf, 0xff, 0xf4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x4, 0xff, 0xff,
    0xba, 0xff, 0xff, 0x50, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x5f, 0xff, 0xfa, 0x8f,
    0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x8, 0xff, 0xff, 0x75, 0xff, 0xff,
    0xb0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xbf, 0xff, 0xf5, 0x2f, 0xff, 0xfe, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xe,
    0xff, 0xff, 0x10, 0xef, 0xff, 0xf4, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x4, 0xff, 0xff,
    0xd0, 0x9, 0xff, 0xff, 0x90, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xaf, 0xff, 0xf8, 0x0,
    0x3f, 0xff, 0xff, 0x20, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x2f, 0xff, 0xff, 0x20, 0x0, 0xbf,
    0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xc, 0xff, 0xff, 0xb0, 0x0, 0x3, 0xff, 0xff,
    0xfa, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa, 0xff,
    0xff, 0xf3, 0x0, 0x0, 0x9, 0xff, 0xff, 0xfb,
    0x10, 0x0, 0x0, 0x0, 0x1b, 0xff, 0xff, 0xf9,
    0x0, 0x0, 0x0, 0xd, 0xff, 0xff, 0xff, 0x94,
    0x21, 0x24, 0x9f, 0xff, 0xff, 0xfd, 0x0, 0x0,
    0x0, 0x0, 0x1d, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfd, 0x10, 0x0, 0x0, 0x0,
    0x0, 0x1c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfc, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1,
    0x7d, 0xff, 0xff, 0xff, 0xfd, 0x71, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1,
    0x45, 0x65, 0x41, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+31 "1" */
    0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xee, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfe, 0xef, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xee, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfe, 0x45, 0x55, 0x55, 0x55, 0xff, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xfe, 0x0,
    0x0, 0x0, 0x0, 0xff, 0xff, 0xe0, 0x0, 0x0,
    0x0, 0xf, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0xff, 0xff, 0xe0, 0x0, 0x0, 0x0, 0xf, 0xff,
    0xfe, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xe0,
    0x0, 0x0, 0x0, 0xf, 0xff, 0xfe, 0x0, 0x0,
    0x0, 0x0, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0xf, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0, 0xff,
    0xff, 0xe0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xe0, 0x0,
    0x0, 0x0, 0xf, 0xff, 0xfe, 0x0, 0x0, 0x0,
    0x0, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x0, 0xf,
    0xff, 0xfe, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xfe, 0x0,
    0x0, 0x0, 0x0, 0xff, 0xff, 0xe0, 0x0, 0x0,
    0x0, 0xf, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0xff, 0xff, 0xe0, 0x0, 0x0, 0x0, 0xf, 0xff,
    0xfe, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xe0,
    0x0, 0x0, 0x0, 0xf, 0xff, 0xfe, 0x0, 0x0,
    0x0, 0x0, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0xf, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0, 0xff,
    0xff, 0xe0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xe0, 0x0,
    0x0, 0x0, 0xf, 0xff, 0xfe, 0x0, 0x0, 0x0,
    0x0, 0xff, 0xff, 0xe0,

    /* U+32 "2" */
    0x0, 0x0, 0x0, 0x0, 0x1, 0x35, 0x66, 0x54,
    0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x4, 0x9d, 0xff, 0xff, 0xff, 0xff, 0xe9, 0x20,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x6d, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xb1, 0x0, 0x0,
    0x0, 0x2, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf3, 0x0, 0x0, 0x4, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf3, 0x0, 0x4, 0xff, 0xff, 0xff, 0xfb,
    0x63, 0x21, 0x12, 0x5a, 0xff, 0xff, 0xff, 0xd0,
    0x0, 0x2d, 0xff, 0xff, 0x91, 0x0, 0x0, 0x0,
    0x0, 0x2, 0xcf, 0xff, 0xff, 0x60, 0x0, 0x1b,
    0xfe, 0x30, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xdf, 0xff, 0xfb, 0x0, 0x0, 0x9, 0x30, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x5, 0xff, 0xff,
    0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0x10, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xef, 0xff, 0xf2, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xe, 0xff,
    0xff, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x5f, 0xff, 0xfb, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xc, 0xff,
    0xff, 0x60, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x5, 0xff, 0xff, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x2, 0xef, 0xff, 0xf7, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xdf, 0xff,
    0xfc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1, 0xdf, 0xff, 0xfe, 0x20, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1,
    0xdf, 0xff, 0xff, 0x30, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xdf, 0xff, 0xff,
    0x40, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x2, 0xdf, 0xff, 0xff, 0x40, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0xef,
    0xff, 0xff, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x2, 0xef, 0xff, 0xff, 0x30,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0xef, 0xff, 0xfe, 0x30, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0xef, 0xff,
    0xfe, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3, 0xff, 0xff, 0xfe, 0x20, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4,
    0xff, 0xff, 0xfe, 0x20, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x4, 0xff, 0xff, 0xfd,
    0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x5, 0xff, 0xff, 0xfd, 0x10, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5, 0xff,
    0xff, 0xfd, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x6, 0xff, 0xff, 0xff, 0x65,
    0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x53,
    0x5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x8f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfa, 0x8, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xa0, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfa,

    /* U+33 "3" */
    0x0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf2, 0x0, 0xf, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x20, 0x0, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2,
    0x0, 0xf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfe, 0x10, 0x0, 0x55,
    0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x9f,
    0xff, 0xff, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1e, 0xff, 0xff, 0x70,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xc, 0xff, 0xff, 0xa0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa, 0xff,
    0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xe1, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x4, 0xff, 0xff, 0xf3, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0xff, 0xff,
    0xf6, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1, 0xdf, 0xff, 0xf9, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xbf, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x8f, 0xff, 0xfe,
    0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x5f, 0xff, 0xff, 0x60, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xe,
    0xff, 0xff, 0xff, 0xfd, 0x93, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xef, 0xff, 0xff,
    0xff, 0xff, 0xfc, 0x30, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xe, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x60, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x9a, 0xab, 0xbd, 0xff, 0xff, 0xff, 0xff, 0x50,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x5b, 0xff, 0xff, 0xff, 0x20, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6,
    0xff, 0xff, 0xfa, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x6, 0xff, 0xff,
    0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xe, 0xff, 0xff, 0x40, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x9f, 0xff, 0xf7, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7, 0xff,
    0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x8f, 0xff, 0xf7, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xb, 0xff, 0xff, 0x60, 0x5, 0x30, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0xff,
    0xff, 0xf2, 0x1, 0xef, 0x70, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xcf, 0xff, 0xfd, 0x0,
    0x9f, 0xff, 0xe7, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x2, 0xcf, 0xff, 0xff, 0x50, 0x2f, 0xff, 0xff,
    0xff, 0xb7, 0x42, 0x10, 0x13, 0x6b, 0xff, 0xff,
    0xff, 0xc0, 0x3, 0xef, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd1, 0x0,
    0x1, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xc1, 0x0, 0x0, 0x0, 0x3a,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x70, 0x0, 0x0, 0x0, 0x0, 0x1, 0x6a, 0xef,
    0xff, 0xff, 0xff, 0xff, 0xb6, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x13, 0x56, 0x65,
    0x42, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+34 "4" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x7, 0xff, 0xff, 0xd0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4,
    0xff, 0xff, 0xf2, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xef,
    0xff, 0xf5, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xcf, 0xff,
    0xf9, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x9f, 0xff, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x6f, 0xff, 0xfe, 0x10,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0x40, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1e, 0xff, 0xff, 0x70, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xb, 0xff, 0xff, 0xb0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x8, 0xff, 0xff, 0xd1, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4,
    0xff, 0xff, 0xf3, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0xff,
    0xff, 0xf6, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xdf, 0xff,
    0xfa, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xaf, 0xff, 0xfd,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x6f, 0xff, 0xff, 0x20,
    0x0, 0x0, 0x3, 0x88, 0x88, 0x20, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0x40, 0x0,
    0x0, 0x0, 0x6f, 0xff, 0xf4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1e, 0xff, 0xff, 0x80, 0x0, 0x0,
    0x0, 0x6, 0xff, 0xff, 0x40, 0x0, 0x0, 0x0,
    0x0, 0xc, 0xff, 0xff, 0xb0, 0x0, 0x0, 0x0,
    0x0, 0x6f, 0xff, 0xf4, 0x0, 0x0, 0x0, 0x0,
    0x8, 0xff, 0xff, 0xe1, 0x0, 0x0, 0x0, 0x0,
    0x6, 0xff, 0xff, 0x40, 0x0, 0x0, 0x0, 0x5,
    0xff, 0xff, 0xf3, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x6f, 0xff, 0xf4, 0x0, 0x0, 0x0, 0x2, 0xff,
    0xff, 0xf6, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6,
    0xff, 0xff, 0x40, 0x0, 0x0, 0x0, 0xdf, 0xff,
    0xfa, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6f,
    0xff, 0xf4, 0x0, 0x0, 0x0, 0xaf, 0xff, 0xff,
    0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xef, 0xff,
    0xff, 0xee, 0xee, 0xee, 0xef, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x66, 0x66, 0x66, 0x66, 0x66,
    0x66, 0x66, 0x66, 0x66, 0x6b, 0xff, 0xff, 0x96,
    0x66, 0x66, 0x60, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x8f, 0xff, 0xf4, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x8, 0xff, 0xff, 0x40, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x8f, 0xff, 0xf4, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x8, 0xff, 0xff, 0x40, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x8f, 0xff, 0xf4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x8, 0xff, 0xff, 0x40, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x8f, 0xff, 0xf4, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x8, 0xff, 0xff, 0x40, 0x0, 0x0, 0x0,

    /* U+35 "5" */
    0x0, 0x0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x90, 0x0, 0x0, 0x4,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf9, 0x0, 0x0, 0x0, 0x6f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x90,
    0x0, 0x0, 0x8, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf9, 0x0, 0x0, 0x0,
    0x9f, 0xff, 0xf5, 0x55, 0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x30, 0x0, 0x0, 0xb, 0xff, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xdf, 0xff, 0xd0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xe, 0xff, 0xfb, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff,
    0xa0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1f, 0xff, 0xf8, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0xff, 0xff, 0x60, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5f, 0xff,
    0xf5, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x6, 0xff, 0xff, 0x30, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x8f, 0xff, 0xf2, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x9, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xed, 0xb8, 0x50, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xbf, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfa, 0x20, 0x0, 0x0,
    0x0, 0xd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x80, 0x0, 0x0, 0x0, 0xef,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xb0, 0x0, 0x0, 0x4, 0x44, 0x44, 0x44,
    0x45, 0x56, 0x8a, 0xdf, 0xff, 0xff, 0xff, 0xa0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x29, 0xff, 0xff, 0xff, 0x40, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4,
    0xff, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x5, 0xff, 0xff,
    0xf1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xd, 0xff, 0xff, 0x50, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x9f, 0xff, 0xf7, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7, 0xff,
    0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x8f, 0xff, 0xf7, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xb, 0xff, 0xff, 0x50, 0x5, 0x30, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0xff,
    0xff, 0xf2, 0x1, 0xef, 0x70, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xcf, 0xff, 0xfc, 0x0,
    0x9f, 0xff, 0xe7, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0xcf, 0xff, 0xff, 0x50, 0x2f, 0xff, 0xff,
    0xff, 0xb7, 0x42, 0x11, 0x13, 0x6b, 0xff, 0xff,
    0xff, 0xc0, 0x3, 0xef, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd1, 0x0,
    0x1, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xc1, 0x0, 0x0, 0x0, 0x2a,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x70, 0x0, 0x0, 0x0, 0x0, 0x1, 0x6a, 0xef,
    0xff, 0xff, 0xff, 0xff, 0xc6, 0x10, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x13, 0x56, 0x65,
    0x42, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+36 "6" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x24,
    0x56, 0x54, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1, 0x7c, 0xff, 0xff, 0xff,
    0xff, 0xfc, 0x82, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x19, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfa, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xc0, 0x0, 0x0, 0x0, 0x0, 0x9f, 0xff, 0xff,
    0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xf4, 0x0,
    0x0, 0x0, 0x0, 0x9f, 0xff, 0xff, 0xfd, 0x84,
    0x10, 0x0, 0x2, 0x5b, 0xfc, 0x0, 0x0, 0x0,
    0x0, 0x6f, 0xff, 0xff, 0xe6, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x2, 0x30, 0x0, 0x0, 0x0, 0x2f,
    0xff, 0xff, 0xd1, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xb, 0xff, 0xff,
    0xd0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xf3, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x9f, 0xff, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xff, 0xff, 0x20, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4, 0xff,
    0xff, 0xb0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x8f, 0xff, 0xf7,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xa, 0xff, 0xff, 0x40, 0x0,
    0x0, 0x0, 0x23, 0x32, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xdf, 0xff, 0xf1, 0x0, 0x3, 0x9d,
    0xff, 0xff, 0xff, 0xd9, 0x30, 0x0, 0x0, 0x0,
    0xe, 0xff, 0xff, 0x0, 0x2b, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xc3, 0x0, 0x0, 0x0, 0xff,
    0xff, 0xf0, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf7, 0x0, 0x0, 0xf, 0xff, 0xff,
    0x5f, 0xff, 0xff, 0xff, 0xdd, 0xef, 0xff, 0xff,
    0xff, 0xf7, 0x0, 0x0, 0xff, 0xff, 0xff, 0xff,
    0xfe, 0x83, 0x0, 0x0, 0x4, 0xbf, 0xff, 0xff,
    0xf4, 0x0, 0xf, 0xff, 0xff, 0xff, 0xfb, 0x10,
    0x0, 0x0, 0x0, 0x0, 0x4e, 0xff, 0xff, 0xd0,
    0x0, 0xef, 0xff, 0xff, 0xfb, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0x50, 0xd,
    0xff, 0xff, 0xfe, 0x10, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x8f, 0xff, 0xfa, 0x0, 0xaf, 0xff,
    0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x1, 0xff, 0xff, 0xe0, 0x7, 0xff, 0xff, 0xf4,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xe,
    0xff, 0xff, 0x0, 0x4f, 0xff, 0xff, 0x20, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xdf, 0xff,
    0xf0, 0x0, 0xff, 0xff, 0xf4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xe, 0xff, 0xff, 0x0,
    0xa, 0xff, 0xff, 0x70, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1, 0xff, 0xff, 0xd0, 0x0, 0x3f,
    0xff, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0xff, 0xf9, 0x0, 0x0, 0xcf, 0xff,
    0xf9, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1e,
    0xff, 0xff, 0x40, 0x0, 0x2, 0xff, 0xff, 0xf8,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x2d, 0xff, 0xff,
    0xc0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xfd, 0x61,
    0x0, 0x0, 0x1, 0x8f, 0xff, 0xff, 0xf3, 0x0,
    0x0, 0x0, 0xa, 0xff, 0xff, 0xff, 0xfd, 0xba,
    0xbd, 0xff, 0xff, 0xff, 0xf5, 0x0, 0x0, 0x0,
    0x0, 0x8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf5, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x4, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xb2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x4a, 0xef, 0xff, 0xff, 0xff, 0xe9, 0x30, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x24, 0x56, 0x54, 0x20, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+37 "7" */
    0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xbb, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfb, 0xbf, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xbb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xbf, 0xff,
    0xf6, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55,
    0x6f, 0xff, 0xff, 0x3b, 0xff, 0xff, 0x10, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x6, 0xff, 0xff,
    0xc0, 0xbf, 0xff, 0xf1, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xdf, 0xff, 0xf5, 0xb, 0xff,
    0xff, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x5f, 0xff, 0xfd, 0x0, 0xbf, 0xff, 0xf1, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xc, 0xff, 0xff,
    0x60, 0xb, 0xff, 0xff, 0x10, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3, 0xff, 0xff, 0xe0, 0x0, 0x69,
    0x99, 0x90, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xbf, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x2f, 0xff, 0xff,
    0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x9, 0xff, 0xff, 0xa0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1,
    0xff, 0xff, 0xf2, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xfb,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xe, 0xff, 0xff, 0x40, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6,
    0xff, 0xff, 0xd0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xdf, 0xff, 0xf6,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x4f, 0xff, 0xfe, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xc,
    0xff, 0xff, 0x70, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xf1,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xaf, 0xff, 0xf9, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1f,
    0xff, 0xff, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x8, 0xff, 0xff, 0xb0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xff, 0xff, 0xf4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f,
    0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xe, 0xff, 0xff, 0x50,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x5, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xdf,
    0xff, 0xf7, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x4f, 0xff, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xb, 0xff, 0xff, 0x80, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0xff,
    0xff, 0xf2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x9f, 0xff, 0xfa, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1f, 0xff, 0xff, 0x30, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8, 0xff,
    0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+38 "8" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0x45, 0x65,
    0x42, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x17, 0xcf, 0xff, 0xff, 0xff, 0xff,
    0xc7, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1,
    0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x90, 0x0, 0x0, 0x0, 0x0, 0x3, 0xef, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe2,
    0x0, 0x0, 0x0, 0x2, 0xef, 0xff, 0xff, 0xff,
    0xcb, 0xab, 0xdf, 0xff, 0xff, 0xff, 0xe2, 0x0,
    0x0, 0x0, 0xdf, 0xff, 0xff, 0xc5, 0x0, 0x0,
    0x0, 0x5, 0xdf, 0xff, 0xff, 0xd0, 0x0, 0x0,
    0x6f, 0xff, 0xff, 0x80, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x8f, 0xff, 0xff, 0x60, 0x0, 0xc, 0xff,
    0xff, 0x90, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x9f, 0xff, 0xfc, 0x0, 0x0, 0xff, 0xff, 0xf2,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xff,
    0xff, 0xf0, 0x0, 0x1f, 0xff, 0xfe, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xd, 0xff, 0xff,
    0x10, 0x2, 0xff, 0xff, 0xd0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xcf, 0xff, 0xf2, 0x0,
    0xf, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xe, 0xff, 0xff, 0x0, 0x0, 0xdf,
    0xff, 0xf4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0xff, 0xff, 0xd0, 0x0, 0x7, 0xff, 0xff,
    0xd1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xdf,
    0xff, 0xf7, 0x0, 0x0, 0xe, 0xff, 0xff, 0xd3,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xdf, 0xff, 0xfd,
    0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xfb, 0x63,
    0x21, 0x23, 0x6b, 0xff, 0xff, 0xfe, 0x30, 0x0,
    0x0, 0x0, 0x3e, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfd, 0x20, 0x0, 0x0, 0x0,
    0x0, 0xb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfa, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3c,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfb, 0x20, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xff,
    0xff, 0xfd, 0xcb, 0xcd, 0xff, 0xff, 0xff, 0xff,
    0x60, 0x0, 0x0, 0x6f, 0xff, 0xff, 0xf8, 0x30,
    0x0, 0x0, 0x0, 0x39, 0xff, 0xff, 0xff, 0x60,
    0x0, 0x2f, 0xff, 0xff, 0xb1, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x2, 0xcf, 0xff, 0xff, 0x20, 0xb,
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xcf, 0xff, 0xfa, 0x0, 0xff, 0xff,
    0xf2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x2, 0xff, 0xff, 0xf0, 0x4f, 0xff, 0xfc, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xc,
    0xff, 0xff, 0x45, 0xff, 0xff, 0xa0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xaf, 0xff,
    0xf5, 0x6f, 0xff, 0xfa, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xa, 0xff, 0xff, 0x64,
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xdf, 0xff, 0xf4, 0x1f, 0xff,
    0xff, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x2f, 0xff, 0xff, 0x10, 0xcf, 0xff, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xc,
    0xff, 0xff, 0xc0, 0x5, 0xff, 0xff, 0xfb, 0x10,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1c, 0xff, 0xff,
    0xf5, 0x0, 0xb, 0xff, 0xff, 0xff, 0x82, 0x0,
    0x0, 0x0, 0x3, 0x9f, 0xff, 0xff, 0xfb, 0x0,
    0x0, 0x1d, 0xff, 0xff, 0xff, 0xff, 0xcb, 0xab,
    0xcf, 0xff, 0xff, 0xff, 0xfd, 0x10, 0x0, 0x0,
    0x1b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfb, 0x0, 0x0, 0x0, 0x0, 0x5,
    0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xd5, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x49,
    0xdf, 0xff, 0xff, 0xff, 0xff, 0xd9, 0x40, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x13,
    0x55, 0x65, 0x53, 0x10, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+39 "9" */
    0x0, 0x0, 0x0, 0x0, 0x2, 0x45, 0x65, 0x42,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0xae, 0xff, 0xff, 0xff, 0xfe, 0xa4, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x2b, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfc, 0x30, 0x0, 0x0,
    0x0, 0x0, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x70, 0x0, 0x0, 0x0, 0x5f,
    0xff, 0xff, 0xff, 0xdb, 0xac, 0xdf, 0xff, 0xff,
    0xff, 0x90, 0x0, 0x0, 0x2f, 0xff, 0xff, 0xf8,
    0x10, 0x0, 0x0, 0x16, 0xdf, 0xff, 0xff, 0x60,
    0x0, 0xc, 0xff, 0xff, 0xd2, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x8f, 0xff, 0xff, 0x20, 0x3, 0xff,
    0xff, 0xe1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x9f, 0xff, 0xfb, 0x0, 0x9f, 0xff, 0xf7, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xdf, 0xff,
    0xf3, 0xc, 0xff, 0xff, 0x10, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x6, 0xff, 0xff, 0x90, 0xef,
    0xff, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3f, 0xff, 0xff, 0xf, 0xff, 0xfd, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xff,
    0xff, 0xf3, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0x6d,
    0xff, 0xff, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7, 0xff, 0xff, 0xfa, 0xaf, 0xff, 0xf7,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xef,
    0xff, 0xff, 0xc5, 0xff, 0xff, 0xf2, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xbf, 0xff, 0xff, 0xfd,
    0xd, 0xff, 0xff, 0xe3, 0x0, 0x0, 0x0, 0x0,
    0x1, 0xbf, 0xff, 0xff, 0xff, 0xe0, 0x4f, 0xff,
    0xff, 0xfa, 0x40, 0x0, 0x0, 0x38, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x0, 0x8f, 0xff, 0xff, 0xff,
    0xfe, 0xdd, 0xff, 0xff, 0xff, 0xf5, 0xff, 0xff,
    0xf0, 0x0, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf5, 0xf, 0xff, 0xfe, 0x0, 0x0,
    0x3c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb2,
    0x1, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x4, 0x9e,
    0xff, 0xff, 0xff, 0xd9, 0x30, 0x0, 0x2f, 0xff,
    0xfc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x23, 0x32,
    0x0, 0x0, 0x0, 0x5, 0xff, 0xff, 0xa0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x8f, 0xff, 0xf7, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xc, 0xff,
    0xff, 0x30, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x2, 0xff, 0xff, 0xe0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x9f, 0xff, 0xf9, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff,
    0xff, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xd, 0xff, 0xff, 0xa0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x1d, 0xff, 0xff, 0xf2, 0x0, 0x0, 0x3, 0x20,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x6e, 0xff, 0xff,
    0xf6, 0x0, 0x0, 0x0, 0xcf, 0xa5, 0x20, 0x0,
    0x1, 0x48, 0xdf, 0xff, 0xff, 0xf9, 0x0, 0x0,
    0x0, 0x4f, 0xff, 0xff, 0xff, 0xef, 0xff, 0xff,
    0xff, 0xff, 0xf8, 0x0, 0x0, 0x0, 0xc, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf6,
    0x0, 0x0, 0x0, 0x0, 0xbf, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x91, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x28, 0xdf, 0xff, 0xff, 0xff, 0xff,
    0xc7, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3, 0x45, 0x65, 0x42, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 466, .box_w = 23, .box_h = 23, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 265, .adv_w = 182, .box_w = 7, .box_h = 15, .ofs_x = 2, .ofs_y = -8},
    {.bitmap_index = 318, .adv_w = 306, .box_w = 15, .box_h = 5, .ofs_x = 2, .ofs_y = 11},
    {.bitmap_index = 356, .adv_w = 182, .box_w = 7, .box_h = 8, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 384, .adv_w = 528, .box_w = 29, .box_h = 37, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 921, .adv_w = 528, .box_w = 13, .box_h = 35, .ofs_x = 10, .ofs_y = 0},
    {.bitmap_index = 1149, .adv_w = 528, .box_w = 27, .box_h = 36, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1635, .adv_w = 528, .box_w = 27, .box_h = 36, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 2121, .adv_w = 528, .box_w = 31, .box_h = 35, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2664, .adv_w = 528, .box_w = 27, .box_h = 36, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 3150, .adv_w = 528, .box_w = 29, .box_h = 37, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 3687, .adv_w = 528, .box_w = 27, .box_h = 35, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 4160, .adv_w = 528, .box_w = 29, .box_h = 37, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 4697, .adv_w = 528, .box_w = 27, .box_h = 37, .ofs_x = 3, .ofs_y = -1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint8_t glyph_id_ofs_list_0[] = {
    0, 1, 2, 3, 0, 4, 5, 6,
    7, 8, 9, 10, 11, 12, 13
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 43, .range_length = 15, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = glyph_id_ofs_list_0, .list_length = 15, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_FULL
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
    .last_letter = 0,
    .last_glyph_id = 0
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t font_montserrat_numeric_50 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 44,          /*The maximum line height required by the font*/
    .base_line = 8,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -4,
    .underline_thickness = 3,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if FONT_MONTSERRAT_NUMERIC_50*/

