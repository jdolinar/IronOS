#include "power.hpp"
#include "ui_drawing.hpp"
#include <OperatingModes.h>
#ifdef OLED_96x16

void drawWaterSpirit(int16_t y, int16_t z) {
  int8_t offset_y = y / 512;  // 4096 / 8
  int8_t offset_x = z / 512;  // 4096 / 8
  uint8_t center_y = 7 + offset_y;
  uint8_t center_x = 7 + offset_x;

  if (OLED::getRotation()) {
    OLED::drawRect(80,0,95,15, false);
    // OLED::drawRect(0,0,15,15, false);
  } else {
    OLED::drawRect(80,0,95,15, false);
    OLED::drawRect(80+center_x, 0+center_y, 80+center_x+1, 0+center_y+1, false); 
  }
}
#endif