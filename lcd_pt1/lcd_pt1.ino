// Include Libraries
#include <LiquidCrystal.h>

// Constants
const int RS = 2, EN = 3, D4 = 4, D5 = 5, D6 = 6, D7 = 7;

// Initialize the LiquidCrystal Object
LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);

// Setup
void setup() {
  lcd.begin(16, 2);
}

// Main Loop
void loop() {
  lcd.setCursor(4, 0);
  lcd.print("Nikhil");
  delay(1000);
  lcd.clear();
  delay(1000); 
}
