void setup() {
  setupButtons();
  setupServo();
}

void loop() {
  if (isOpenButtonHeld()) {
    moveServoOpen();
  }

  if (isCloseButtonHeld()) {
    moveServoClosed();
  }
}
