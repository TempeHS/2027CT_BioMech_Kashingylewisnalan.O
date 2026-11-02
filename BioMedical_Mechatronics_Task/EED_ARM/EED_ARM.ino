void setup() {
  Serial.begin(115200);
  setupButtons();
  setupServo();
}

void loop() {
  if (isOpenButtonHeld()) {
    moveServoOpen();
  }
  else if (isCloseButtonHeld()) {
    moveServoClosed();
  }
}
