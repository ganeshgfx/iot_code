int ledPin = 12; // LED
int pirpin = 13; // PIR Out pin
int pirStat = 0; // PIR status
void setup() {
pinMode(ledPin, OUTPUT);
pinMode(pirPin, INPUT);
Serial.begin(9600);
}
void loop() {
pirstatdigitalRead(pirpin);
if (pirStat == HIGH) {
digitalwrite(ledPin, HIGH);
Serial.println("Motion detect");
} else {
digitalwrite(ledPin, LOW);
Serial.println("Motion absent");
}
}
