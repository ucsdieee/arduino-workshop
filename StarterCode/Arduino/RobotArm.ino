/* File: RobotArm.ino
 * Controls a robot arm using keyboard input
 * Please make sure to run KeyPress.pde in Processing to read key input
 * Author: Antony Nguyen & INSERT YOUR NAME HERE!
 */

#include <Servo.h>

// Declare a value to receive from Serial
char val;

// Declare values for constraints
int lowerConstraint = 10;
int upperConstraint = 170;

// TODO: Declare three servo objects




// Declare three angles
int bottomArmAngle, middleArmAngle, topArmAngle;

void setup() {

  // TODO: Attach the servos to three pins




  // Set the default angle to 90
  bottomArmAngle = middleArmAngle = topArmAngle = 90;

  Serial.begin(9600);
}

void loop() {

  // Constrain the angles to be between certain angles
  bottomArmAngle = constrain(bottomArmAngle, lowerConstraint, upperConstraint);
  middleArmAngle = constrain(middleArmAngle, lowerConstraint, upperConstraint);
  topArmAngle = constrain(topArmAngle, lowerConstraint, upperConstraint);

  // TODO: Write each servos to the angles




  // TODO: Read the Serial input into val




  // TODO: Check if the value is equal to keys, incrementing angles by 20 each time




  // Reset the value to 0 after it's read
  val = 0;
}
