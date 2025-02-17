#include "lvgl/lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

const LV_ATTRIBUTE_MEM_ALIGN uint8_t heatbed_24_map[] = {
  0x00, 0x00, 0x40, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x10, 0x00, 0x00, 
  0x00, 0x04, 0x80, 0x00, 0x00, 0x94, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 
  0x00, 0x0e, 0x90, 0x00, 0x03, 0xf5, 0x00, 0x00, 0x7f, 0x10, 0x00, 0x00, 
  0x00, 0x6f, 0xd0, 0x00, 0x0b, 0xf9, 0x00, 0x00, 0xef, 0x40, 0x00, 0x00, 
  0x00, 0xdf, 0xf3, 0x00, 0x1f, 0xfe, 0x00, 0x06, 0xff, 0xa0, 0x00, 0x00, 
  0x00, 0xff, 0xfa, 0x00, 0x5f, 0xff, 0x50, 0x09, 0xff, 0xf1, 0x00, 0x00, 
  0x00, 0xff, 0xff, 0x10, 0x4f, 0xff, 0xc0, 0x09, 0xff, 0xf8, 0x00, 0x00, 
  0x00, 0xcf, 0xff, 0x70, 0x1f, 0xff, 0xf3, 0x05, 0xff, 0xfe, 0x00, 0x00, 
  0x00, 0x6f, 0xff, 0xa0, 0x0b, 0xff, 0xf6, 0x00, 0xff, 0xff, 0x10, 0x00, 
  0x00, 0x1f, 0xff, 0xa0, 0x04, 0xff, 0xf5, 0x00, 0x9f, 0xff, 0x10, 0x00, 
  0x00, 0x0a, 0xff, 0x60, 0x00, 0xef, 0xf1, 0x00, 0x3f, 0xfd, 0x00, 0x00, 
  0x00, 0x04, 0xfe, 0x00, 0x00, 0x9f, 0xa0, 0x00, 0x0d, 0xf6, 0x00, 0x00, 
  0x00, 0x01, 0xf7, 0x00, 0x00, 0x5f, 0x30, 0x00, 0x0a, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0xd0, 0x00, 0x00, 0x4a, 0x00, 0x00, 0x08, 0x50, 0x00, 0x00, 
  0x00, 0x01, 0x40, 0x00, 0x00, 0x31, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 
  0x5e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe5, 
  0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 
  0x4e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe4, 
};

lv_img_dsc_t heatbed_24 = {
  .header.always_zero = 0,
  .header.w = 24,
  .header.h = 24,
  .data_size = 288,
  .header.cf = LV_IMG_CF_ALPHA_4BIT,
  .data = heatbed_24_map,
};
