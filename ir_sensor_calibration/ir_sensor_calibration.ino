int irPin = 2;
int buzzer = 4;
int frequency = 1;
int duration = 20;

void setup() {
	pinMode(irPin, INPUT);
	pinMode(buzzer, OUTPUT);
}

void loop() {
	if (digitalRead(irPin) == HIGH) {
		tone(buzzer, frequency, duration);
	}
	else {
		noTone(buzzer);
	}
	delay(10);
}