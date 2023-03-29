// Variables
int red = 13;
int green = 11;
int yellow = 8;

// Setup
void setup(){
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
}

// Loop
void loop(){
  digitalWrite(yellow, 0);
  digitalWrite(red, 1);
  delay(6000);
  digitalWrite(red, 0);
  digitalWrite(green, 1);
  delay(3000);
  digitalWrite(green, 0);
  digitalWrite(yellow, 1);
  delay(1000);
}