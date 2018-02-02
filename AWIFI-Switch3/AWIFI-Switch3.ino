#include <Adafruit_NeoPixel.h>
#define NUMSLEDs 2
#define PINSLEDs 10
Adafruit_NeoPixel SLEDs = Adafruit_NeoPixel (NUMSLEDs,PINSLEDs,NEO_RGB + NEO_KHZ800);
//********************************
#define sw1 D3
#define sw2 D4
#define ledPin1 D6
#define ledPin2 D7
int st_sw1 = 0;
int st_sw2 = 0;
// calm switch is 1 (signal) & press switch is 0 (signal)
int st_lp1 = 0;
int st_lp2 = 0;
int last_st_sw1 = 0; // set 0 for When press to turn led on immediately
int last_st_sw2 = 1; // set 1 for When press and after calm to turn led on immediately

void setup()
{
  pinMode(10,OUTPUT);
  SLEDs.begin();
  SLEDs.show();
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(sw1,INPUT);
  pinMode(sw2,INPUT);
}

void loop()
{
  st_sw1 = digitalRead(sw1);
  if ((st_sw1 == 0) && (last_st_sw1 == 1))
  {
    st_lp1 = ~st_lp1;
    digitalWrite(ledPin1,st_lp1);
    delay(250);
  }
  last_st_sw1 = st_sw1;

  st_sw2 = digitalRead(sw2);
  if ((st_sw2 == 1) && (last_st_sw2 == 0))
  {
    st_lp2 = ~st_lp2;
    digitalWrite(ledPin2,st_lp2);
    delay(250);
  }
  last_st_sw2 = st_sw2;
}


