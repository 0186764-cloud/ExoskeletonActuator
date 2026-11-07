// Define control pins
const int In1 = 7; // IN1 on motor driver
const int In2 = 8; // IN2 on motor driver
const int ENa = 9; // ENA on motor driver (PWM speed control)

void setup() {
  // Set all motor control pins as outputs
  pinMode(In1, OUTPUT);
  pinMode(In2, OUTPUT);
  pinMode(ENa, OUTPUT);
}

void loop() {
  // --- Rotate Forward for 2 seconds ---
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  analogWrite(ENa, 255); // Set speed (0 - 255)
  delay(2000);

  // --- Stop for 1 second ---
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);
  delay(1000);

  // --- Rotate Backward for 2 seconds ---
  digitalWrite(In1, LOW);
  digitalWrite(In2, HIGH);
  analogWrite(ENA, 255); // Set speed (0 - 255)
  delay(2000);

  // --- Stop for 1 second ---
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);
  delay(1000);
}
