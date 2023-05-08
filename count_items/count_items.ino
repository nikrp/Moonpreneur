int item_count = 0;
int irPin = 2;
int buzzer = 3; 
void setup() {
  Serial.begin(9600);
  pinMode(irPin, INPUT);
  pinMode(buzzer, OUTPUT);

}

void loop() {
  if (digitalRead(irPin) == HIGH) {
    item_count++;
    Serial.print("Counted Item: ");
    Serial.println(item_count);
    tone(buzzer,250,500);
    delay(500);
    noTone(buzzer);
    delay(1000);
  }
  else
  {
    noTone(buzzer);
  }
}