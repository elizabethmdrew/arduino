#include <Stepper.h>

//Specify pinout
int IN1 = 5;
int IN2 = 4;
int IN3 = 3;
int IN4 = 2;

const int stepsPerRev = 64; 
//Initialize the stepper
Stepper julia(stepsPerRev, IN1, IN2, IN3, IN4); 

void setup(){

  //Setup pinouts
  for(int i = 2; i < 6; i++){
    digitalWrite(i, OUTPUT); 
  }
  //Set speed of julia
  julia.setSpeed(0);
}

void loop(){
  julia.step(stepsPerRev);
}
