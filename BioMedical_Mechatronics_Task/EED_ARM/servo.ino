#include <Servo.h>

const int SERVO_PIN = 2;
const int OPEN_LIMIT = 0;
const int CLOSED_LIMIT = 90;

Servo gripServo;
int servoPosition = 45;

unsigned long lastMoveTime = 0;
const unsigned long MOVE_INTERVAL = 20;

void setupServo() {
  gripServo.attach(SERVO_PIN);
  gripServo.write(servoPosition);
}

void moveServoOpen() {
  if (millis() - lastMoveTime >= MOVE_INTERVAL) {
    if (servoPosition > OPEN_LIMIT) {
      servoPosition--;
      gripServo.write(servoPosition);
    }
    lastMoveTime = millis();
  }
}

void moveServoClosed() {
  if (millis() - lastMoveTime >= MOVE_INTERVAL) {
    if (servoPosition < CLOSED_LIMIT) {
      servoPosition++;
      gripServo.write(servoPosition);
    }
    lastMoveTime = millis();
  }
}
