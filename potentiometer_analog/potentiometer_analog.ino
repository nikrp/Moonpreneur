void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  int potValue = analogRead(A0);
  float voltage = (potValue/1023.0)*5;
  if (voltage > 2.5) {
    digitalWrite(12, HIGH);
  }
  else {
    digitalWrite(12, LOW);
  }
}
