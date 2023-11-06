#include <NewPing.h>

#define TRIGGER_PIN_FRONT 4  // Arduino pin for the front ultrasonic sensor trigger
#define ECHO_PIN_FRONT 5     // Arduino pin for the front ultrasonic sensor echo
#define TRIGGER_PIN_RIGHT 6  // Arduino pin for the right ultrasonic sensor trigger
#define ECHO_PIN_RIGHT 7     // Arduino pin for the right ultrasonic sensor echo
#define TRIGGER_PIN_LEFT 8   // Arduino pin for the left ultrasonic sensor trigger
#define ECHO_PIN_LEFT 9      // Arduino pin for the left ultrasonic sensor echo

#define MAX_DISTANCE 200     // Maximum distance in centimeters for obstacle detection

NewPing frontSensor(TRIGGER_PIN_FRONT, ECHO_PIN_FRONT, MAX_DISTANCE);
NewPing rightSensor(TRIGGER_PIN_RIGHT, ECHO_PIN_RIGHT, MAX_DISTANCE);
NewPing leftSensor(TRIGGER_PIN_LEFT, ECHO_PIN_LEFT, MAX_DISTANCE);

void setup() {
  Serial.begin(9600);
}

void loop() {
  int frontDistance = frontSensor.ping_cm();
  int rightDistance = rightSensor.ping_cm();
  int leftDistance = leftSensor.ping_cm();

  Serial.print("Front Distance: ");
  Serial.print(frontDistance);
  Serial.print(" cm, Right Distance: ");
  Serial.print(rightDistance);
  Serial.print(" cm, Left Distance: ");
  Serial.print(leftDistance);
  Serial.println(" cm");

  if (frontDistance < 20) {
    // Obstacle detected in front, take evasive action
    // For example, you can turn the robot or stop and reverse.
  } else if (rightDistance < 20) {
    // Obstacle detected on the right, take appropriate action.
  } else if (leftDistance < 20) {
    // Obstacle detected on the left, take appropriate action.
  } else {
    // No obstacles detected, continue moving forward.
  }
  
  delay(100);  // Add a small delay to reduce sensor readings frequency.
}
