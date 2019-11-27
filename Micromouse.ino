#include <AFMotor.h> //You need the AdaFruit library
#include <NewPing.h> //You can write NewPing and download the library
//https://learn.adafruit.com/adafruit-motor-shield/using-dc-motors
//https://learn.adafruit.com/adafruit-motor-shield/af-dcmotor-class
//http://sribasu.com/programming-tutorials/creating-an-obstacle-avoiding-robot-with-arduino-adafruit-motor-shield-v1-and-ultra-sonic-sensor.html
//https://www.tutorialspoint.com/arduino/arduino_ultrasonic_sensor.htm

AF_DCMotor motor1(1,MOTOR12_64KHZ);
AF_DCMotor motor2(2,MOTOR12_64KHZ);

const int pingPin = A4; // Trigger Pin of Ultrasonic Sensor
const int echoPin = A5; // Echo Pin of Ultrasonic Sensor

void setup() {
  // put your setup code here, to run once:
motor1.setSpeed(120);
motor2.setSpeed(120);  
Serial.begin(9600); // Starting Serial Terminal

}

void loop() {
  
  // put your main code here, to run repeatedly:
  //GO FORWARD
  long duration, cm; // and inches ?
   pinMode(pingPin, OUTPUT);
   digitalWrite(pingPin, LOW);
   delayMicroseconds(2);
   digitalWrite(pingPin, HIGH);
   delayMicroseconds(2);
   digitalWrite(pingPin, LOW);
   pinMode(echoPin, INPUT);
   duration = pulseIn(echoPin, HIGH);//THIS IS WHAT's Measuring our 
//   inches = microsecondsToInches(duration);
   cm = microsecondsToCentimeters(duration);
   //Serial.print(inches);
   //Serial.print("in, ");
   Serial.print(cm);
   Serial.print("cm");
   Serial.println();
   //delay(1);
    motor1.run(BACKWARD); // flip directions
   motor2.run(BACKWARD);//MOTOR 2 runs opposite of motor 1
//  delay(5000);
//STOP the motor
  
 // delay(5000);
//GO BACKWARD
if(cm<=10)
{
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor1.run(RELEASE);//this makes it go in the same direction of the other one
  motor2.run(FORWARD);
}

  /*delay(5000);
//GO FORWARD AGAIN
   motor1.run(BACKWARD);//
   motor2.run(BACKWARD);
   delay(1500);
   motor1.run(RELEASE);
  motor2.run(RELEASE);
  delay(1500);
//GO RIGHT I think?
  motor1.setSpeed(120);//opposite direction makes the motor turn?
  motor2.setSpeed(120); 
  motor1.run(RELEASE);//
  motor2.run(BACKWARD);
 delay(1500);
// Go BACKWARD
  motor1.setSpeed(120);
  motor2.setSpeed(120);
  motor1.run(BACKWARD); // flip directions
  motor2.run(BACKWARD);//MOTOR 2 runs opposite of motor 
 delay(5000);
 */

}

long microsecondsToInches(long microseconds) {
   return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
   return microseconds / 29 / 2;
}
