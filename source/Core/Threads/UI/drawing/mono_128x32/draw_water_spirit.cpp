#include "power.hpp"
#include "ui_drawing.hpp"
#include <OperatingModes.h>
#ifdef OLED_128x32

void drawWaterSpirit(int16_t y, int16_t z) {
  int8_t offset_y = y / 256;  // 4096 / 8
  int8_t offset_x = z / 256;  // 4096 / 8
  uint8_t center_y = 15 + offset_y;
  uint8_t center_x = 15 + offset_x;

  if (OLED::getRotation()) {
    // OLED::drawRect(0,0,31,31, false);
  } else {
    OLED::drawRect(96,0,127,31, false);
    OLED::drawRect(96+center_x, 0+center_y, 96+center_x+1, 0+center_y+1, false); 
  }
}
#endif