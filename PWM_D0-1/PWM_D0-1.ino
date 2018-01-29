#define LED_PIN D0
int value = 0;

void setup()
{
  pinMode(LED_PIN,OUTPUT);
}

void loop()
{
  for (value = 0; value <= 1023; value += 5)
  {
    analogWrite(LED_PIN, value);
    delay(30);
  }
  for (value = 1023; value >= 0; value -=5)
  {
    analogWrite(LED_PIN, value);
    delay(30);
  }
  delay(1000);
}

