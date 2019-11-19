#include <AFMotor.h>

//https://learn.adafruit.com/adafruit-motor-shield/using-dc-motors
//https://learn.adafruit.com/adafruit-motor-shield/af-dcmotor-class
AF_DCMotor motor1(1,MOTOR12_64KHZ);
AF_DCMotor motor2(2,MOTOR12_64KHZ);
void setup() {
  // put your setup code here, to run once:
motor1.setSpeed(120);
motor2.setSpeed(120);  
int delay=delay(5000)
}

void loop() {
  // put your main code here, to run repeatedly:
  motor1.run(FORWARD);
 motor2.run(BACKWARD);//MOTOR 2 runs opposite of motor 1
  delay(5000);

  motor1.run(RELEASE);
motor2.run(RELEASE);
//delay(5000);

  motor1.run(BACKWARD);//this makes it go backward
  motor2.run(FORWARD);
  delay(5000);

 
}
