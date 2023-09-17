#include <Servo.h>
#define trigPin 7
#define echoPin 6
Servo servo;
int sound = 250;

void setup() {
Serial.begin (9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
servo.attach(13);


}
void loop() {
long duration, distance;
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 29.1;

mylcd.print(distance);

if (distance <= 5) {
Serial.println(distance);
servo.write(180);
}
else if (distance <= 7) {
Serial.println(distance);
servo.write(170);
}
else if (distance <= 9) {
Serial.println(distance);
servo.write(160);
}
else if (distance <= 11) {
Serial.println(distance);
servo.write(150);
}
else if (distance <= 13) {
Serial.println(distance);
servo.write(140);
}
else if (distance <= 15) {
Serial.println(distance);
servo.write(130);
}
else if (distance <= 17) {
Serial.println(distance);
servo.write(120);
}
else if (distance <= 19) {
Serial.println(distance);
servo.write(110);
}
else if (distance <= 21) {
Serial.println(distance);
servo.write(100);
}
else if (distance <= 23) {
Serial.println(distance);
servo.write(90);
}
else {
servo.write(0);
}
if (distance > 60 || distance <= 0){
Serial.println("The distance is more than 60");
}
else {
Serial.print(distance);
Serial.println(" cm");
}
delay(500);
}