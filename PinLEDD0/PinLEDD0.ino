const int PIN_LED = D0;
  // put your setup code here, to run once:
void setup()
{
  pinMode(PIN_LED,OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(PIN_LED,HIGH);
  delay(500);
  digitalWrite(PIN_LED,LOW);
  delay(500);
}
