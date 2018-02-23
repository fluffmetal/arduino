#include <Wire.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define OLED_RESET -1
Adafruit_SSD1306 OLED(OLED_RESET);

void setup()
{
  Serial.begin(9600);
  OLED.begin(SSD1306_SWITCHCAPVCC, 0x3C);
}

void loop()
{
  OLED.clearDisplay();
  OLED.setTextColor(WHITE);
  OLED.setCursor(0,0);
  OLED.setTextSize(1);
  OLED.println("Nalongkron Boonma");
  OLED.setCursor(15,16);
  OLED.setTextSize(2);
  OLED.println("I'm IoT");
  OLED.display();
}

