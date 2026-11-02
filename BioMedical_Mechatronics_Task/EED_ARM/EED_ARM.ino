void setup() {
  Serial.begin(115200);
  setupButtons();
  setupServo();
}

void loop() {
  bool opening = isOpenButtonHeld();
  bool closing = isCloseButtonHeld();

  if (opening && !closing) {
    moveServoOpen();
  }
  else if (closing && !opening) {
    moveServoClosed();
  }
}
