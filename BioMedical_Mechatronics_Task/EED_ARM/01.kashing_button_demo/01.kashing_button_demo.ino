const int BUTTON_PIN =4;
const int BUTTON_PIN2 =3;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(BUTTON_PIN2, INPUT_PULLUP);
  Serial.begin(115200);
}


void loop() {
if (digitalRead(BUTTON_PIN) == LOW) {
  Serial.println("CLAMP");
  delay(250);
}
if (digitalRead(BUTTON_PIN2) == LOW) {
  Serial.println("UNCLAMP");
  delay(250);
}
}
