#include "lvgl/lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

const LV_ATTRIBUTE_MEM_ALIGN uint8_t homeY_24_map[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf1, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf1, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x38, 0xcf, 0xfc, 0x83, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3c, 0xff, 0xfd, 0xdf, 0xff, 0xc3, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x06, 0xff, 0xa4, 0x00, 0x00, 0x4a, 0xff, 0x60, 0x00, 0x00, 
  0x00, 0x00, 0x6f, 0xd3, 0x00, 0x00, 0x00, 0x00, 0x3d, 0xf6, 0x00, 0x00, 
  0x00, 0x03, 0xfd, 0x10, 0x00, 0x00, 0x00, 0x00, 0x01, 0xdf, 0x30, 0x00, 
  0x00, 0x0c, 0xf3, 0x00, 0x34, 0x10, 0x00, 0x24, 0x10, 0x3f, 0xc0, 0x00, 
  0x00, 0x3f, 0xa0, 0x00, 0x4f, 0x80, 0x00, 0xdd, 0x00, 0x0a, 0xf3, 0x00, 
  0x00, 0x8f, 0x30, 0x00, 0x0b, 0xe1, 0x05, 0xf6, 0x00, 0x03, 0xf8, 0x00, 
  0x11, 0xcf, 0x00, 0x00, 0x04, 0xf6, 0x0b, 0xd0, 0x00, 0x00, 0xfc, 0x11, 
  0xff, 0xfd, 0x00, 0x00, 0x00, 0xbc, 0x3f, 0x40, 0x00, 0x00, 0xdf, 0xff, 
  0xff, 0xfd, 0x00, 0x00, 0x00, 0x4f, 0xbb, 0x00, 0x00, 0x00, 0xdf, 0xff, 
  0x11, 0xcf, 0x00, 0x00, 0x00, 0x0b, 0xf4, 0x00, 0x00, 0x00, 0xfc, 0x11, 
  0x00, 0x8f, 0x30, 0x00, 0x00, 0x08, 0xf0, 0x00, 0x00, 0x04, 0xf8, 0x00, 
  0x00, 0x3f, 0xa0, 0x00, 0x00, 0x08, 0xf0, 0x00, 0x00, 0x0a, 0xf3, 0x00, 
  0x00, 0x0c, 0xf3, 0x00, 0x00, 0x08, 0xf0, 0x00, 0x00, 0x3f, 0xc0, 0x00, 
  0x00, 0x03, 0xfd, 0x10, 0x00, 0x08, 0xf0, 0x00, 0x01, 0xdf, 0x30, 0x00, 
  0x00, 0x00, 0x6f, 0xd3, 0x00, 0x04, 0x80, 0x00, 0x3d, 0xf6, 0x00, 0x00, 
  0x00, 0x00, 0x06, 0xff, 0xa3, 0x00, 0x00, 0x4a, 0xff, 0x60, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3c, 0xff, 0xfd, 0xdf, 0xff, 0xc3, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x38, 0xcf, 0xfc, 0x83, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf1, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf1, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

lv_img_dsc_t homeY_24 = {
  .header.always_zero = 0,
  .header.w = 24,
  .header.h = 24,
  .data_size = 288,
  .header.cf = LV_IMG_CF_ALPHA_4BIT,
  .data = homeY_24_map,
};
