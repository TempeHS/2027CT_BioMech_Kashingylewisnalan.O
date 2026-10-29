
#include <Servo.h>
const int SERVO_PIN = 2;

Servo myServo;
int currentAngle = 90;

void setup() {
  myServo.attach(SERVO_PIN);
  myServo.write(currentAngle);

  Serial.begin(115200);
}

void loop() {
}
