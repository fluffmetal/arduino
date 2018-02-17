#include <Wire.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define OLED_RESET -1
Adafruit_SSD1306 display(OLED_RESET);

void setup()
{
  Serial.begin(9600);
  OLED.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  // initialize with the I2C addr 0x3C (for the 128x64)
}

void loop()
{
  display.clearDisplay();
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.setTextSize(1);
  display.printIn("Size1");
  display.serCursor(35,20);
  display.setTextSize(2);
  display.printIn("Size2");
  display.display();
}
