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
  OLED.clearDisplay();
  OLED.fillScreen(WHITE);     
  OLED.setTextColor(INVERSE);   // Set display color as white
  OLED.setCursor(10, 0);      // Set start position of display
  OLED.setTextSize(2);        // Set text size x2
  OLED.println("Read ADC");   // Show title message
  OLED.setCursor(10, 20);     // Set display position
  OLED.setTextSize(1);        // Set text size x1
  OLED.print("A0 = " + String(analogRead(A0)));
  OLED.println(" , " + String(analogRead(A0) * 3.3/1023) + " V.");
  OLED.display();
}

