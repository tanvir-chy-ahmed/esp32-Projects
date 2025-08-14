#define PIR_PIN 4     // PIR sensor output pin
#define BUZZER_PIN 5  // Buzzer control pin

void setup() {
  Serial.begin(115200);
  pinMode(PIR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, LOW);
}

void loop() {
  int motionDetected = digitalRead(PIR_PIN);

  if (motionDetected == HIGH) {
    Serial.println("Motion detected!");
    digitalWrite(BUZZER_PIN, HIGH); // turn buzzer on
  } else {
    Serial.println("No motion");
    digitalWrite(BUZZER_PIN, LOW);  // turn buzzer off
  }

  delay(500); // small delay to avoid flooding serial
}
