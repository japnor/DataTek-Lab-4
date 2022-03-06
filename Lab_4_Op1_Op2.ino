#include <Wire.h>
#include <Zumo32U4.h>

Zumo32U4ButtonA buttonA;
Zumo32U4Buzzer buzzer;
Zumo32U4Motors motors;


void setup() {
  // put your setup code here, to run once:
  buttonA.waitForButton();
}

void loop() {
  // put your main code here, to run repeatedly:
  if (buttonA.isPressed()){
    buzzer.playFrequency(200, 1000, 8);
    delay(1500);
    
    ledRed(1);
    ledYellow(1);
    ledGreen(1);
    delay(1000);

    ledRed(0);
    ledYellow(0);
    ledGreen(0);

    ledYellow(1);
    for (int speed = 0; speed <= 150; speed++)
    {
      motors.setSpeeds(speed, speed*2);
      delay(20);
    }
    for (int speed = 150; speed >= 0; speed--)
    {
      motors.setSpeeds(speed, speed*2);
      delay(20);
    }
    for (int speed = 0; speed <= 150; speed++)
    {
      motors.setSpeeds(speed*2, speed);
      delay(20);
    }
    for (int speed = 150; speed >= 0; speed--)
    {
      motors.setSpeeds(speed*2, speed);
      delay(20);
    }
    for (int speed = 0; speed <= 150; speed--)
    {
      motors.setSpeeds(speed*2, speed);
      delay(50);
    }
    for (int speed = 150; speed >= 0; speed--)
    {
      motors.setSpeeds(speed*2, speed);
      delay(50);
    }
    for (int speed = 0; speed <= 150; speed--)
    {
      motors.setSpeeds(speed, speed*2);
      delay(50);
    }
    for (int speed = 150; speed >= 0; speed--)
    {
      motors.setSpeeds(speed, speed*2);
      delay(50);
    }
    

  }
}
