// Push Button
int pb1 = 3;
int pb2 = 2;

// Counter
int count1 = 0;
int count2 = 0;

// Setup
void setup() {
  pinMode(pb1, INPUT);
  pinMode(pb2, INPUT);
  Serial.begin(9600);
}

// Loop
void loop() {
  if (digitalRead(pb1) == LOW) {
    count1++;
    Serial.println("----------------------------");
    Serial.print("Team 1's Score: ");
    Serial.print(count1);
    Serial.println();
    delay(200);
  }

  if (digitalRead(pb2) == LOW) {
    count2++;
    Serial.println("----------------------------");
    Serial.print("Team 2's Score: ");
    Serial.print(count2);
    Serial.println();
    delay(200);
  }
}
