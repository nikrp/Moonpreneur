// Variable
int delay_time = 1000;
int original_delay_time = 1000;

// Setup
void setup() {
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);

}

// Loop
void loop() {

  // LED 1
  digitalWrite(1, HIGH);
  delay(delay_time);

  // LED 2
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  delay(delay_time);

  // LED 3
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(delay_time);

  // LED 4
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(delay_time);

  // LED 5
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(delay_time);

  // LED 6
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(delay_time);

  // LED 7
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(delay_time);

  // LED 8
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  delay(delay_time);

  // Reset Back to One
  digitalWrite(8, LOW);

  // Add to delay_time
  if (delay_time > 0) {
    delay_time -= 500;
  }
  else {
    delay_time = original_delay_time * 10;
    original_delay_time *= 10;
  }

}
