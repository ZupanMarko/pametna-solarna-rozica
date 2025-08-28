//Define sensor pins
#define sensUL A1
#define sensUR A0
#define sensBL A3
#define sensBR A2

//Define servo pins
#define servoRotation 7
#define servoTilt 6

//Include libraries
#include <Servo.h>
Servo Tilt;
Servo Rotation;

//Activate debug mode
bool debug = true;


//----------------------------------------------------------------------------
//Parameters
int startAngle = 150;
long currentAngle = startAngle;
const int tiltStep = 5;
const int tiltTolerance = 5;
const int rotationTolerance = 5;
const int rotationTime = 45;

//Limits
const int maxAngle = 200;
const int minAngle = 20;
//-----------------------------------------------------------------------------
//Function definitions
void tilt(int phi){
  int angle = (float(phi)/180*1000+1000);
  Tilt.writeMicroseconds(angle);

}

void right(){
  Rotation.write(0);
  delay(rotationTime);
  Rotation.write(90);
}

void left(){
  Rotation.write(180);
  delay(rotationTime);
  Rotation.write(90);
}

void up(){
  currentAngle = constrain(currentAngle + tiltStep, minAngle, maxAngle);
  tilt(currentAngle);
}

void down(){
  currentAngle = constrain(currentAngle - tiltStep, minAngle, maxAngle);
  tilt(currentAngle);
}


void setup() {
  Serial.begin(9600);
  Rotation.attach(servoRotation);
  Tilt.attach(servoTilt);
  tilt(currentAngle);


}

void loop() {
  float sensUL_value = analogRead(sensUL);
  float sensUR_value = analogRead(sensUR);
  float sensBL_value = analogRead(sensBL);
  float sensBR_value = analogRead(sensBR);
  	
  if(debug){
    Serial.print("Sensor UL: ");
    Serial.println(sensUL_value);
    Serial.print("Sensor UR: ");
    Serial.println(sensUR_value);
    Serial.print("Sensor BL: ");
    Serial.println(sensBL_value);
    Serial.print("Sensor BR: ");
    Serial.println(sensBR_value);
  }

  //Calculate averages
  float avgTop = (sensUL_value + sensUR_value)/2.0;
  float avgBottom = (sensBL_value + sensBR_value)/2.0;
  float avgLeft = (sensUL_value + sensBL_value)/2.0;
  float avgRight = (sensUR_value + sensBR_value)/2.0;

  bool tiltNeeded = abs(avgTop - avgBottom) > tiltTolerance;
  bool rotationNeeded = abs(avgLeft - avgRight) > rotationTolerance;

  if(tiltNeeded || rotationNeeded){
    if(tiltNeeded){
      if(avgTop > avgBottom){
        up();
      } else{
        down();
      }
    }
    if(rotationNeeded){
      if(avgRight > avgLeft){
        left();
      } else{
        right();
      }
    }
  } else{
    delay(60000);
  }

  delay(500);

}
