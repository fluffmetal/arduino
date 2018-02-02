int pinTone = D8;

void setup()
{
  analogWrite(pinTone,255);
  delay(1000);
}

void loop()
{
  for (int i = 0; i < 1; i++)
  {
    analogWriteFreq(440); // 440Hz
    delay(500);
    analogWriteFreq(587); // 587Hz
    delay(500);
  }
  for (int i = 0; i <100; i++)
  {
    analogWriteFreq(67);
    delay(250);
    analogWriteFreq(50);
    delay(300);
  }
}

