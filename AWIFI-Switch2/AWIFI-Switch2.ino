#define sw2 D3
#define ledPin2 D0
int st_sw2 = 0;

void setup()
{
  pinMode(ledPin2,OUTPUT);
  pinMode(sw2,INPUT);
}

void loop()
{
  st_sw2 = digitalRead(sw2);
  digitalWrite(ledPin2,st_sw2);
}
