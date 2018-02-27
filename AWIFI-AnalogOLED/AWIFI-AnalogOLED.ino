#include <Wire.h>               // include I2C bus library
#include <SPI.h>
#include <Adafruit_GFX.h>       // Include OLED library
#include <Adafruit_SSD1306.h>   // Include OLED library
#define OLED_RESET -1
Adafruit_SSD1306 OLED(OLED_RESET);    // New object OLED

void setup()
{
  OLED.begin(SSD1306_SWITCHCAPVCC, 0x3C);   // I2C addr 0x3C
}

void loop()
{
  OLED.clearDisplay();        // Set display color as white
  OLED.setTextColor(WHITE);   // Set start position of
}

