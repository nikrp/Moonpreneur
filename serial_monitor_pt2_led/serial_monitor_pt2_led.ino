// Variables
const int LED = 3;

// Setup
void setup() {
  pinMode(LED, OUTPUT);

  Serial.begin(9600);

  Serial.println("--------------- START SERIAL MONITOR ---------------");
  Serial.println("To turn the LED on, press 1");
  Serial.println("To turn the LED off, press 0");
  Serial.println();
}

// Loop
void loop() {
  if (Serial.available() > 0) {
    char a = Serial.read();

    if (a == '1') {
      digitalWrite(LED, HIGH);
      Serial.println("LED On");
      delay(200);
    }
    else if (a == '0') {
      digitalWrite(LED, LOW);
      Serial.println("LED Off");
      delay(200);
    }
  }
}
