// Countdown on 7-Segment Display

// Pins
int segmentPins[] = {1, 2, 3, 4, 5, 6, 7, 8};
int totalPins = 8;
int pinNine[] = {1, 2, 3, 4, 6, 7};
int pinEight[] = {1, 2, 3, 4, 5, 6, 7};
int pinSeven[] = {1, 2, 3};
int pinSix[] = {1, 3, 4, 5, 6, 7};
int pinFive[] = {1, 3, 4, 6, 7};
int pinFour[] = {2, 3, 6, 7};
int pinThree[] = {1, 2, 3, 4, 7};
int pinTwo[] = {1, 2, 4, 5, 7};
int pinOne[] = {2, 3};
int pinZero[] = {1, 2, 3, 4, 5, 6};
int whichNumber = 9;

// Setup
void setup() {
  for (int i = 0; i < totalPins; i++) {
    pinMode(segmentPins[i], OUTPUT);
  }
}

void loop() {
  
  // 9
  for (int i = 0; i < sizeof(pinNine)/sizeof(pinNine[0]); i++) {
    digitalWrite(pinNine[i], HIGH);
  }

  delay(1000);

  for (int i = 0; i < sizeof(pinNine)/sizeof(pinNine[0]); i++) {
    digitalWrite(pinNine[i], LOW);
  }

  // 8
  for (int i = 0; i < sizeof(pinEight)/sizeof(pinEight[0]); i++) {
    digitalWrite(pinEight[i], HIGH);
  }

  delay(1000);

  for (int i = 0; i < sizeof(pinEight)/sizeof(pinEight[0]); i++) {
    digitalWrite(pinEight[i], LOW);
  }

  // 7
  for (int i = 0; i < sizeof(pinSeven)/sizeof(pinSeven[0]); i++) {
    digitalWrite(pinSeven[i], HIGH);
  }

  delay(1000);

  for (int i = 0; i < sizeof(pinSeven)/sizeof(pinSeven[0]); i++) {
    digitalWrite(pinSeven[i], LOW);
  }
  // 6
  for (int i = 0; i < sizeof(pinSix)/sizeof(pinSix[0]); i++) {
    digitalWrite(pinSix[i], HIGH);
  }

  delay(1000);

  for (int i = 0; i < sizeof(pinSix)/sizeof(pinSix[0]); i++) {
    digitalWrite(pinSix[i], LOW);
  }
  // 5
  for (int i = 0; i < sizeof(pinFive)/sizeof(pinFive[0]); i++) {
    digitalWrite(pinFive[i], HIGH);
  }

  delay(1000);

  for (int i = 0; i < sizeof(pinFive)/sizeof(pinFive[0]); i++) {
    digitalWrite(pinFive[i], LOW);
  }
  // 4
  for (int i = 0; i < sizeof(pinFour)/sizeof(pinFour[0]); i++) {
    digitalWrite(pinFour[i], HIGH);
  }

  delay(1000);

  for (int i = 0; i < sizeof(pinFour)/sizeof(pinFour[0]); i++) {
    digitalWrite(pinFour[i], LOW);
  }

  // 3
  for (int i = 0; i < sizeof(pinThree)/sizeof(pinThree[0]); i++) {
    digitalWrite(pinThree[i], HIGH);
  }

  delay(1000);

  for (int i = 0; i < sizeof(pinThree)/sizeof(pinThree[0]); i++) {
    digitalWrite(pinThree[i], LOW);
  }

  // 2
  for (int i = 0; i < sizeof(pinTwo)/sizeof(pinTwo[0]); i++) {
    digitalWrite(pinTwo[i], HIGH);
  }

  delay(1000);

  for (int i = 0; i < sizeof(pinTwo)/sizeof(pinTwo[0]); i++) {
    digitalWrite(pinTwo[i], LOW);
  }

  // 1
  for (int i = 0; i < sizeof(pinOne)/sizeof(pinOne[0]); i++) {
    digitalWrite(pinOne[i], HIGH);
  }

  delay(1000);

  for (int i = 0; i < sizeof(pinOne)/sizeof(pinOne[0]); i++) {
    digitalWrite(pinOne[i], LOW);
  }

  // 0
  for (int i = 0; i < sizeof(pinZero)/sizeof(pinZero[0]); i++) {
    digitalWrite(pinZero[i], HIGH);
  }

  delay(1000);

  for (int i = 0; i < sizeof(pinZero)/sizeof(pinZero[0]); i++) {
    digitalWrite(pinZero[i], LOW);
  }
}
