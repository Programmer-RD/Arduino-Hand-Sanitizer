void setup()
{
  pinMode(8, INPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int val = digitalRead(8);
  char blutooth_val = Serial.read();
  if (val == 0 || blutooth_val == '0')
  {
    Serial.println("A USER IS GOING TO USE THE Sanitizer ! ");
    digitalWrite(9, HIGH);
    delay(5000);
    Serial.println("A USER USED THE Sanitizer ! ");
  }
  else
  {
    digitalWrite(9, LOW);
  }
}
//
