#include "lvgl/lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

const LV_ATTRIBUTE_MEM_ALIGN uint8_t upCornor_20_10_map[] = {
  0x00, 0x00, 0x00, 0x00, 0x09, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xbf, 0xfb, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1d, 0xff, 0xff, 0xc1, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0xef, 0xfe, 0xef, 0xfe, 0x30, 0x00, 0x00, 
  0x00, 0x00, 0x5f, 0xff, 0xd1, 0x2d, 0xff, 0xf4, 0x00, 0x00, 
  0x00, 0x07, 0xff, 0xfb, 0x00, 0x01, 0xbf, 0xff, 0x60, 0x00, 
  0x00, 0x9f, 0xff, 0x90, 0x00, 0x00, 0x09, 0xff, 0xf8, 0x00, 
  0x0b, 0xff, 0xf7, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xb0, 
  0xaf, 0xff, 0x50, 0x00, 0x00, 0x00, 0x00, 0x05, 0xff, 0xf9, 
  0x0b, 0xe3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0xb0, 
};

lv_img_dsc_t upCornor_20_10 = {
  .header.always_zero = 0,
  .header.w = 20,
  .header.h = 10,
  .data_size = 100,
  .header.cf = LV_IMG_CF_ALPHA_4BIT,
  .data = upCornor_20_10_map,
};
