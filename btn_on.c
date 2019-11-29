#include "lvgl/lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_BTN_ON
#define LV_ATTRIBUTE_IMG_BTN_ON
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_BTN_ON uint8_t btn_on_map[] = {
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 0*/
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 1*/

  0xf0, 0x78, 
  0xc0, 0x18, 
  0x80, 0x08, 
  0x80, 0x08, 
  0x19, 0xc0, 
  0x25, 0x20, 
  0x25, 0x20, 
  0x19, 0x20, 
  0x80, 0x08, 
  0x80, 0x08, 
  0xc0, 0x18, 
  0xf0, 0x78, 
};

const lv_img_dsc_t btn_on = {
  .header.always_zero = 0,
  .header.w = 13,
  .header.h = 12,
  .data_size = 32,
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .data = btn_on_map,
};
