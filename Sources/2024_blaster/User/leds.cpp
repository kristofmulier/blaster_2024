#include "leds.h"

/* Private */
_leds::_leds()
{
}

/* Public */
static _leds &_leds::getInstance()
{
  static _leds leds;
  return leds;
}

/* Wheel code taken from the Adafruit Neopixel strandtest example */
static uint32_t _leds::wheel(uint8_t WheelPos)
{
  /*
  WheelPos = 255 - WheelPos;
  if (WheelPos < 85)
  {
    return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  }
  if (WheelPos < 170)
  {
    WheelPos -= 85;
    return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
  WheelPos -= 170;
  return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);*/
  return 0;
}

void _leds::update()
{
  //strip.show();
}

void _leds::setPixelColor(uint8_t pixel, uint32_t color)
{
    /*
  if (pixel == 0) //5mm TH LED has a different color order
  {
    uint32_t green = (color >> 16 & 0xff);
    uint32_t red = (color >> 8 & 0xff);
    uint32_t blue = (color & 0xff);

    color = (red << 16) | (green << 8) | blue;
  }
  strip.setPixelColor(pixel, color);
  update();
  */
}


void _leds::init()
{
    /*
  strip.begin();
  strip.setBrightness(255);
  strip.clear();
  */
}

void _leds::clear()
{
    /*
  for (int i = 0; i < 9; i++)
    strip.setPixelColor(i, 0);
  update();
  */
}

void _leds::stealth(bool status){
    /*
  if (status) strip.setBrightness(1);
  else strip.setBrightness(255);
  */
}

void _leds::setBrightness(uint8_t brightness){
    /*
  strip.setBrightness(brightness);
  */
}

_leds &Leds = Leds.getInstance();
