void setup() {
  // put your setup code here, to run once:
  //start serial
 Serial.begin(9600);
 pinMode(12, OUTPUT);
 Serial.setTimeout(10000000000); //Effectively disables timeout

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.readStringUntil('\n');
digitalWrite(12, HIGH);
delay(10);
digitalWrite(12, LOW);


}
