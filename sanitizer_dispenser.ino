void setup() {
  pinMode(7, OUTPUT);     // Relay output
  pinMode(3, INPUT);      // Sensor input
  Serial.begin(9600);
}

void loop() {
  int c = digitalRead(3);
  Serial.println(c);

  if (c == 1) {
    digitalWrite(7, HIGH);   // Relay ON
    delay(1000);
    digitalWrite(7, LOW);    // Relay OFF
    delay(5000);
  } else {
    digitalWrite(7, LOW);
  }

  delay(200);
}
