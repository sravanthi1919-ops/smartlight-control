String command = "";

void setup() {
  pinMode(13, OUTPUT);       // LED pin
  Serial.begin(9600);        // Simulate Bluetooth input
}

void loop() {
  if (Serial.available()) {
    command = Serial.readStringUntil('\n');
    command.trim(); // Remove any trailing newline or space

    if (command == "ON") {
      digitalWrite(13, HIGH);
    } else if (command == "OFF") {
      digitalWrite(13, LOW);
    }
  }
}
