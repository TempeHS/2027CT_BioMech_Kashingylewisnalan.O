
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
  currentAngle = toAngle; // Update the global position tracking
}

void setup() {
  myServo.attach(SERVO_PIN);   // servo signal on D2
  myServo.write(currentAngle);           // move to the middle
}

void loop() {
if (digitalRead(BUTTON_PIN) == HIGH) {
  int angle = map(BUTTON_PIN, 0, 1023, 0, 180 );
    myServo.write(currentAngle);
  delay(15);
}
if (digitalRead(BUTTON_PIN2) == HIGH) {
  int angle = map(BUTTON_PIN2, 0, 1023, 0, 180 );
    myServo.write(currentAngle);
  delay(15);
}
}
