// Pin definitions
const int PWM1 = 5;
const int DIR1 = 6;
const int PWM2 = 7;
const int DIR2 = 8;

// Incoming serial command variables
char command;
int speed;

// Setup function
void setup() {
  // Initialize pins
  pinMode(PWM1, OUTPUT);
  pinMode(DIR1, OUTPUT);
  pinMode(PWM2, OUTPUT);
  pinMode(DIR2, OUTPUT);

  // Start serial communication at 57600 baud
  Serial.begin(57600);
}

// Loop function
void loop() {
  if (Serial.available() > 0) {
    // Read the command
    command = Serial.read();

    // Execute command
    switch (command) {
      case 'F': // Forward
        speed = Serial.parseInt();
        moveForward(speed);
        break;
      case 'B': // Backward
        speed = Serial.parseInt();
        moveBackward(speed);
        break;
      case 'L': // Left
        speed = Serial.parseInt();
        turnLeft(speed);
        break;
      case 'R': // Right
        speed = Serial.parseInt();
        turnRight(speed);
        break;
      case 'S': // Stop
        stopMotors();
        break;
      default:
        // Unknown command
        break;
    }
  }
}

// Function to move forward
void moveForward(int speed) {
  digitalWrite(DIR1, HIGH);
  analogWrite(PWM1, speed);
  digitalWrite(DIR2, HIGH);
  analogWrite(PWM2, speed);
}

// Function to move backward
void moveBackward(int speed) {
  digitalWrite(DIR1, LOW);
  analogWrite(PWM1, speed);
  digitalWrite(DIR2, LOW);
  analogWrite(PWM2, speed);
}

// Function to turn left
void turnLeft(int speed) {
  digitalWrite(DIR1, LOW);
  analogWrite(PWM1, speed);
  digitalWrite(DIR2, HIGH);
  analogWrite(PWM2, speed);
}

// Function to turn right
void turnRight(int speed) {
  digitalWrite(DIR1, HIGH);
  analogWrite(PWM1, speed);
  digitalWrite(DIR2, LOW);
  analogWrite(PWM2, speed);
}

// Function to stop motors
void stopMotors() {
  analogWrite(PWM1, 0);
  analogWrite(PWM2, 0);
}
