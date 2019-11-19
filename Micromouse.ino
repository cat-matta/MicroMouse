#include <AFMotor.h>



AF_DCMotor motor1(1,MOTOR12_64KHZ);
AF_DCMotor motor2(2,MOTOR12_64KHZ);
void setup() {
  // put your setup code here, to run once:
motor1.setSpeed(100);
motor2.setSpeed(100);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  motor1.run(BACKWARD);
  motor2.run(FORWARD);
  Delay(5000);
  motor1.run(FORWARD);
  motor2.run(FORWARD);

}
