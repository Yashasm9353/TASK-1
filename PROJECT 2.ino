#include <Servo.h>
Servo garageServo;

void setup() {
  pinMode(7, OUTPUT); // Green LED
  pinMode(8, OUTPUT); // Yellow LED
  pinMode(9, OUTPUT); // Red LED
  garageServo.attach(10);
  Serial.begin(9600);
}

void loop() {
  // Read distance
  long distance = getDistance();
  
  // LED logic
  if (distance > 100) {
    digitalWrite(7, HIGH); // Green ON
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
  } 
  else if (distance >= 50) {
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH); // Yellow ON
    digitalWrite(9, LOW);
  }
  else {
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH); // Red ON
  }

  // Light check
  if (analogRead(A0) < 500) { // Dark condition
    garageServo.write(90); // Activate servo
  } 
  else {
    garageServo.write(0);
  }
  delay(100);
}

long getDistance() {
  // Ultrasonic measurement code here
}