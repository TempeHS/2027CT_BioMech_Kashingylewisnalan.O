const int OPEN_BUTTON = 4;
const int CLOSE_BUTTON = 3;

void setupButtons() {
  pinMode(OPEN_BUTTON, INPUT_PULLUP);
  pinMode(CLOSE_BUTTON, INPUT_PULLUP);
}

bool isOpenButtonHeld() {
  return digitalRead(OPEN_BUTTON) == LOW;
}

bool isCloseButtonHeld() {
  return digitalRead(CLOSE_BUTTON) == LOW;
}
