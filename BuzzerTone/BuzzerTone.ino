int pinTone = D8;

void setup()
{
  analogWrite(pinTone,255);
  delay(1000);
}

void loop()
{
  analogWriteFreq(440); // 440Hz
  delay(500);
  analogWriteFreq(587); // 587Hz
  delay(500);
}

