const int ProxSensor=13;//d7
void setup() {
 pinMode(ProxSensor,INPUT);
 pinMode(4,OUTPUT);
 Serial.begin(9600);
 }
 void loop() {
 long state = digitalRead(ProxSensor);

if(!state == HIGH)
 {
 Serial.println("Hand Detected !");
 digitalWrite(4, HIGH);
 delay(500);
 }
 else
 {
 Serial.println("Nothing...");
 digitalWrite(4, LOW);
 delay(500);
 }
 }
