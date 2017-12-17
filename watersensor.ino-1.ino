int WaterSensor = 1
int WaterPower = 2

void setup() {
	Serial.being(9600);
	pinMode(WaterSensor, INPUT);
	pinMode(WaterPower, OUTPUT);
	digitalWrite(WaterPower, LOW);
}

void loop() {
	digitalWrite(WaterPower, HIGH);
	delay(2000);
	int waterPresent = digitalRead(WaterSensor); // 0 = No Water, 1 = Water is present
	Serial.println(waterPresent);
	digitalWrite(WaterPower, LOW);
	delay(1000);
}


