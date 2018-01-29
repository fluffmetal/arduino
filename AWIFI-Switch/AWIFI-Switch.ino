#define sw1 D3
#define ledPin1 D0
int st_sw1 = 0;

void setup()
{
  pinMode(ledPin1,OUTPUT);
  pinMode(sw1,INPUT);
}

void loop()
{
  st_sw1 = digitalRead(sw1);
  digitalWrite(ledPin1,not(st_sw1));
}

