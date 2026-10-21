
#include <Servo.h>
const int BUTTON_PIN =4;
const int BUTTON_PIN2 =3;
const int SERVO_PIN = 2;

Servo myServo;
int currentAngle = 90;

void smoothMove(int fromAngle, int toAngle) {
  if (fromAngle < toAngle) {
    for (int a = fromAngle; a <= toAngle; a++) {
      myServo.write(a);
      delay(15);
    }
  } else {
    for (int a = fromAngle; a >= toAngle; a--) {
      myServo.write(a);
      delay(15);
    }
  }
  currentAngle = toAngle;
}

void setup() {
  pinMode(BUTTON_PIN, INPUT);
  pinMode(BUTTON_PIN2, INPUT);

  myServo.attach(SERVO_PIN);
  myServo.write(currentAngle);
}

void loop() {
  if (digitalRead(BUTTON_PIN) == HIGH) {
    int targetAngle = currentAngle + 90;
    if (targetAngle > 180) targetAngle = 180;

    smoothMove(currentAngle, targetAngle);
    currentAngle = targetAngle;
    delay(200);
  }
  if (digitalRead(BUTTON_PIN2) == HIGH) {
    int targetAngle = currentAngle - 90;
    if (targetAngle < 0) targetAngle = 0;

    smoothMove(currentAngle, targetAngle);
    currentAngle = targetAngle;
    delay(200);
  }
}
