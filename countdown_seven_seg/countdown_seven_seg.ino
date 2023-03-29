// Countdown on 7-Segment Display

// Pins
int segmentPins[] = {1, 2, 3, 4, 5, 6, 7, 8};
int totalPins = 8;
int pinNums[10][7] = {{1, 2, 3, 4, 6, 7}, {1, 2, 3, 4, 5, 6, 7}, {1, 2, 3}, {1, 3, 4, 5, 6, 7}, {1, 3, 4, 6, 7}, {2, 3, 6, 7}, {1, 2, 3, 4, 7}, {1, 2, 4, 5, 7}, {2, 3}, {1, 2, 3, 4, 5, 6}};

// Setup
void setup() {
  for (int i = 0; i < totalPins; i++) {
    pinMode(segmentPins[i], OUTPUT);
  }
}

void loop() {

  for (int row = 0; row < 10; row++) {
    for (int col = 0; col < sizeof(pinNums[row])/sizeof(pinNums[row][0]); col++) {
      digitalWrite(pinNums[row][col], HIGH);
    }

    delay(1000);

    for (int col = 0; col < sizeof(pinNums[row])/sizeof(pinNums[row][0]); col++) {
      digitalWrite(pinNums[row][col], LOW);
    }
  }
}