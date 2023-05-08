int red_led = 6;

void setup() {
  pinMode(red_led, OUTPUT);
  pinMode(A0, INPUT);
}

void loop() {
  float pot_val = analogRead(A0);
  float voltage = (pot_val/1023.0)*5;

  if (voltage > 2.5) {
    digitalWrite(red_led, HIGH);
  }
  else {
    digitalWrite(red_led, LOW);
  }
}
