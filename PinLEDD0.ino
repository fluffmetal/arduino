const int PIN_LED = D0;
  // put your setup code here, to run once:
  pinMode(PIN_LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PIN_LED,HIGH);
  delay(1000);
  digitalWrite(PIN_LED,LOW);
  delay(1000);
}
