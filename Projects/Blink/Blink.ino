#define LED 2

const int delayLed = 1000;

void setup() {
  pinMode(LED,OUTPUT);
}

void loop() {
  digitalWrite(LED,HIGH);
  delay(delayLed);
  digitalWrite(LED,LOW);
  delay(delayLed);
}