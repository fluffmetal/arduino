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
  uint16_t val = 0;
  BH1750_Init(BH1750address);
  delay(200);
  if (2 == BH1750_Read(BH1750address))
  {
    val = ((buff[0] << 8) | buff[1]) / 1.2;  // Light density in Lux
    OLED.clearDisplay();
    OLED.setTextColor(WHITE);
    OLED.setCursor(15, 0);
    OLED.setTextSize(2);
    OLED.println("BH1750");
    OLED.setCursor(25, 15);
    OLED.println(String(val) + " lux");
    OLED.display();
  }
  delay(150);
}

int BH1750_Read(int address)  // Reading BH1750
{
  int i = 0;
  Wire.beginTransmission(address);
  Wire.requestFrom(address, 2);
  while (Wire.available())
  {
    buff[i] = Wire.read(); // recive one byte
    i++;
  }
  Wire.endTransmission();
  return i;
}

void BH1750_Init(int address)  // Initial BH1750
{
  Wire.beginTransmission(address);
  Wire.write(0x10);  // lx resolution 120ms
  Wire.endTransmission();
}

