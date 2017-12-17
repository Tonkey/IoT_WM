int MoistureSensor = A0
int MoisturePower = 1

void setup() {
	Serial.being(9600);
	pinMode(MoistureSensor, INPUT);
	pinMode(MoisturePower, OUTPUT);
}

void loop() {
	digitalWrite(MoisturePower, HIGH);
	int value = analogRead(MoistureSensor);
	Serial.println(value);
	delay(1000);
}


