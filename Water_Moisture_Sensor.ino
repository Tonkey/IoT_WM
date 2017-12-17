// Moisture Sensor
int GLED= 13;
int RLED= 2;
int SENSE= 0;
int value= 0;

// Water Sensor
int h20= 1;
int waterLevel= 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(GLED, OUTPUT);
  pinMode(RLED, OUTPUT);
  pinMode(h20, INPUT);
}

void loop() {
  // Moisture Sensor
  value= analogRead(SENSE);
  value= value/10;
  Serial.print("moist: ");
  Serial.println(value);
  if(value<50){
    digitalWrite(GLED, HIGH);
  }
  else {
    digitalWrite(RLED, HIGH);
  }
  delay(2000);
  digitalWrite(GLED, LOW);
  digitalWrite(RLED, LOW);

  // Water Sensor
  waterLevel= analogRead(h20);
  Serial.print("water: ");
  Serial.println(waterLevel);
  delay(2000);
}
