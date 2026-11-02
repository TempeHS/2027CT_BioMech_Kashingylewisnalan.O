#include <Servo.h>

Servo gripServo;

void setup() {
  Serial.begin(115200);
  gripServo.attach(2);
  Serial.println("Servo test started");
}

void loop() {
  gripServo.write(0);
  Serial.println("Moving to 0 degrees");
  delay(1000);

  gripServo.write(90);
  Serial.println("Moving to 90 degrees");
  delay(1000);
}
