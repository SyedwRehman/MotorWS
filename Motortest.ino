//**********************************************************************DC MOTOR****************************************************************************
   /*
  DRV8833-Dual-Motor-Driver-Module
  made on 23 Nov 2020
  by Amir Mohammad Shojaee @ Electropeak
  Home
*/

// #define AIN1 4
// #define AIN2 5
// #define BIN1 7
// #define BIN2 8

// void setup() {
//   //Serial.begin(9600);
  
//   pinMode(AIN1,OUTPUT);
//   pinMode(AIN2,OUTPUT);
//   pinMode(BIN1,OUTPUT);
//   pinMode(BIN2,OUTPUT);
  
// }
 
// void loop() {
//   //Go Forward
//   digitalWrite(AIN1,HIGH); 
//   digitalWrite(AIN2,LOW);
//   digitalWrite(BIN1,HIGH); 
//   digitalWrite(BIN2,LOW);
//   delay(1000);
  
//   //Stop
//   digitalWrite(AIN1,LOW); 
//   digitalWrite(AIN2,LOW);
//   digitalWrite(BIN1,LOW); 
//   digitalWrite(BIN2,LOW);
//   delay(1000);

//   //Go Backwards
//   digitalWrite(AIN1,LOW); 
//   digitalWrite(AIN2,HIGH);
//   digitalWrite(BIN1,LOW); 
//   digitalWrite(BIN2,HIGH);
//   delay(1000);
  
//   //Stop
//   digitalWrite(AIN1,LOW); 
//   digitalWrite(AIN2,LOW);
//   digitalWrite(BIN1,LOW); 
//   digitalWrite(BIN2,LOW);
//   delay(1000);
// }


// #define AIN1 4
// #define AIN2 5
// #define BIN1 7
// #define BIN2 8

// void setup() {
//   Serial.begin(9600);
  
//   pinMode(AIN1,OUTPUT);
//   pinMode(AIN2,OUTPUT);
//   pinMode(BIN1,OUTPUT);
//   pinMode(BIN2,OUTPUT);
  
// }
 
// void loop() {
//   //Go forwards
//   digitalWrite(AIN1,HIGH); 
//   //digitalWrite(AIN2,LOW);
//   for(int i=255; i>= 0; i--)
//   {
//     analogWrite(AIN2,i);
//     Serial.println(i);
//     delay(50);
//   }
//   delay(1000);
//   for(int i=0; i<= 255; i++)
//   {
//     analogWrite(AIN2,i);
//     Serial.println(i);
//     delay(50);
//   }
//   // digitalWrite(BIN1,HIGH); 
//   // digitalWrite(BIN2,LOW);
//   delay(1000);
  
//   //Stop
//   digitalWrite(AIN1,LOW); 
//   digitalWrite(AIN2,LOW);
//   // digitalWrite(BIN1,LOW); 
//   // digitalWrite(BIN2,LOW);
//   delay(1000);

//   //Go backwards
//   digitalWrite(AIN1,LOW); 
// //  digitalWrite(AIN2,HIGH);
//   for(int i=0; i<= 255; i++)
//   {
//     analogWrite(AIN2,i);
//     Serial.println(i);
//     delay(50);
//   }
//   delay(1000);
//   for(int i=255; i>= 0; i--)
//   {
//     analogWrite(AIN2,i);
//     delay(50);
//   }
//   // digitalWrite(BIN1,LOW); 
//   // digitalWrite(BIN2,HIGH);
//   delay(1000);
  
//   //Stop
//   digitalWrite(AIN1,LOW); 
//   digitalWrite(AIN2,LOW);
//   // digitalWrite(BIN1,LOW); 
//   // digitalWrite(BIN2,LOW);
//   delay(1000);
// }



// //TB66
// #define AIN1 4
// #define AIN2 5
// #define PWM1 3
// void setup() {
//   pinMode(PWM1,OUTPUT);
//   pinMode(AIN1,OUTPUT);
//   pinMode(AIN2,OUTPUT);
  
// }
 
// void loop() {
//   //Go CCW
//   digitalWrite(AIN1,LOW);
//   digitalWrite(AIN2,HIGH);

//   for(int i=255; i>= 0; i--)
//   {
//     analogWrite(PWM1,i);
//   }
//   delay(1000);
//   for(int i=0; i<= 255; i++)
//   {
//     analogWrite(PWM1,i);
//   }

//   delay(1000);
  
//   //Stop
//   digitalWrite(AIN1,LOW); 
//   digitalWrite(AIN2,LOW);
//   delay(1000);

//   //Go CW
//   digitalWrite(AIN1,HIGH); 
//   digitalWrite(AIN2,LOW);
//   for(int i=0; i<= 255; i++)
//   {
//     analogWrite(PWM1,i);
//   }
//   delay(1000);
//   for(int i=255; i>= 0; i--)
//   {
//     analogWrite(PWM1,i);
//     delay(50);
//   }
//   delay(1000);
  
//   //Stop
//   digitalWrite(AIN1,LOW); 
//   digitalWrite(AIN2,LOW);
//   delay(1000);
// }

// //****************************************************************STEPPER MOTOR**********************************************************************
// // //Digital method to control a stepper motor.

// void setup() {

//  pinMode(1,OUTPUT);

//  pinMode(2,OUTPUT);

//  pinMode(3,OUTPUT);

//  pinMode(4,OUTPUT);

// }

// int x = 0;

// void loop() {
// if (x!=513){
//   digitalWrite(1, HIGH);
//   digitalWrite(2, LOW);
//   digitalWrite(3, LOW);
//   digitalWrite(4, LOW);
//   delay(2);

//   digitalWrite(1, LOW);
//   digitalWrite(2, HIGH);
//   digitalWrite(3, LOW);
//   digitalWrite(4, LOW);
//   delay(2);

//   digitalWrite(1, LOW);
//   digitalWrite(2, LOW);
//   digitalWrite(3, HIGH);
//   digitalWrite(4, LOW);
//   delay(2);

//   digitalWrite(1, LOW);
//   digitalWrite(2, LOW);
//   digitalWrite(3, LOW);
//   digitalWrite(4, HIGH);
//   delay(2);
//   x=x+1;
// }

// // this works and consumes less power by only consuming 0.11 A
// // the x code tested if it would turn and it does do a single step but its not that noticeable
// // you can then use this to loop it for the whole rotation of 513 im not sure why its not 2048

// }



// /* Example sketch to control a 28BYJ-48 stepper motor with ULN2003 driver board, AccelStepper and Arduino UNO: continuous rotation. More info: https://www.makerguides.com */

// // Include the AccelStepper library:
// #include "AccelStepper.h"

// // Motor pin definitions:
// #define motorPin1  1      // IN1 on the ULN2003 driver
// #define motorPin2  2      // IN2 on the ULN2003 driver
// #define motorPin3  3     // IN3 on the ULN2003 driver
// #define motorPin4  4     // IN4 on the ULN2003 driver

// // Define the AccelStepper interface type; 4 wire motor in half step mode:
// #define MotorInterfaceType 8

// // Initialize with pin sequence IN1-IN3-IN2-IN4 for using the AccelStepper library with 28BYJ-48 stepper motor:
// AccelStepper stepper = AccelStepper(MotorInterfaceType, motorPin1, motorPin3, motorPin2, motorPin4);

// void setup() {
//   // Set the maximum steps per second:
//   stepper.setMaxSpeed(1000);
//   stepper.setCurrentPosition(0);
// }

// // void loop() {
// //   // Set the current position to 0:
// //   //stepper.setCurrentPosition(0);

// //   // // Run the motor forward at 500 steps/second until the motor reaches 4096 steps (1 revolution):
// //   // while (stepper.currentPosition() != 4096) {
// //   //   stepper.setSpeed(1000);
// //   //   stepper.runSpeed();
// //   // }
// //   // delay(1000);

// //   // // Reset the position to 0:
// //   //stepper.setCurrentPosition(0);
// //   stepper.moveTo(2048); // sets the location we want to move to
// //   stepper.setAcceleration(100); // sets the acceleration to 100
// //   stepper.runToPosition(); //runs until it has reached the position given by move to and is a blocking function

// //   // stepper.setSpeed(-1000);
// //   // stepper.moveTo(0);

// //   // // Reset the position to 0:
// //   // stepper.setCurrentPosition(0);

// //   // // Run the motor backwards at 1000 steps/second until the motor reaches -4096 steps (1 revolution):
// //   // while (stepper.currentPosition() != -4096) {
// //   //   stepper.setSpeed(-1000);
// //   //   stepper.runSpeed();
// //   // }

// //   // delay(1000);

// //   // // Reset the position to 0:
// //   // stepper.setCurrentPosition(0);
// //   // // Run the motor forward at 1000 steps/second until the motor reaches 8192 steps (2 revolutions):
// //   // while (stepper.currentPosition() != 8192) {
// //   //   stepper.setSpeed(1000);
// //   //   stepper.runSpeed();
// //   // }

// //   // delay(3000);
// // }


// // void loop() {
// //   // Set the current position to 0:
// //   stepper.setCurrentPosition(0);

// //   // Run the motor forward at 500 steps/second until the motor reaches 4096 steps (1 revolution):
// //   while (stepper.currentPosition() != 4096) {
// //     stepper.setSpeed(1000);
// //     stepper.runSpeed();
// //   }
// //   delay(1000);

// //   // Reset the position to 0:
// //   stepper.setCurrentPosition(0);

// //   // Run the motor backwards at 1000 steps/second until the motor reaches -4096 steps (1 revolution):
// //   while (stepper.currentPosition() != -4096) {
// //     stepper.setSpeed(-1000);
// //     stepper.runSpeed();
// //   }

// //   delay(1000);

// //   // Reset the position to 0:
// //   stepper.setCurrentPosition(0);
// //   // Run the motor forward at 1000 steps/second until the motor reaches 8192 steps (2 revolutions):
// //   while (stepper.currentPosition() != 8192) {
// //     stepper.setSpeed(1000);
// //     stepper.runSpeed();
// //   }

// //   delay(3000);
// // }


// // void loop() {
// //   // Set the speed of the motor in steps per second:
// //   stepper.setSpeed(1000);
// //   // Step the motor with constant speed as set by setSpeed():
// //   stepper.runSpeed();
// // }


//*****************************************************************SERVO MOTOR****************************************************************************

// #include <Servo.h>

// Servo myservo;  // create servo object to control a servo
// // twelve servo objects can be created on most boards

// int pos = 0;    // variable to store the servo position

// void setup() {
//   myservo.attach(9);  // attaches the servo on pin 9 to the servo object
// }

// void loop() {
//   for (pos = 0; pos <= 180; pos += 10) { // goes from 0 degrees to 180 degrees
//     // in steps of 1 degree
//     myservo.write(pos);              // tell servo to go to position in variable 'pos'
//     delay(15);                       // waits 15ms for the servo to reach the position
//   }
//   delay(200);
//   for (pos = 180; pos >= 0; pos -= 10) { // goes from 180 degrees to 0 degrees
//     myservo.write(pos);              // tell servo to go to position in variable 'pos'
//     delay(15);                       // waits 15ms for the servo to reach the position
//   }
// }


