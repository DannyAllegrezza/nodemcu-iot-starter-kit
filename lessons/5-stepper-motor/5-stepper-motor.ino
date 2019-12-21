#include <Stepper.h>

const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution
// initialize the stepper library on D1,D2,D5,D6
Stepper myStepper(stepsPerRevolution, D1, D2, D5, D6);

void setup() {

  // set the speed at 80 rpm:
  myStepper.setSpeed(100);
  Serial.begin(115200);
}

void loop() {
  // step one revolution  in one direction:
  Serial.println("clockwise");
  myStepper.step(stepsPerRevolution);

  delay(3000);
}
