#include <Wire.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define OLED_RESET -1
Adafruit_SSD1306 OLED(OLED_RESET);

int BH1750address = 0x23;  // BH1750 address
byte buff[2];
void setup()
{
  OLED.begin(SSD1306_SWITCHCAPVCC, 0x3C);  // I2C addr 0x3C
}

void loop()
{
  unit16_t val = 0;
  BH1750_Init(BH1750address);
  delay(200);
  if (2 == BH1750_Read(BH1750address))
  {
    val = ((buff[0] << 8) | buff[1]) / 1.2;  // Light density in Lux
    OLED.clearDisplay();
    OLED.setTextColor(WHITE);
    OLED.setCursor(0, 0);
    OLED.setTextSize(3);
    OLED.println("BH1750");
    OLED.setCursor(0, 35);
    OLED.println(String(val) + " lx");
    OLED.display();
  }
  delay(150);
}

