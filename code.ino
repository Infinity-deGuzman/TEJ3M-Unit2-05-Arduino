
/*
  Sweep
  
  Created on March 2022 by Infinity de Guzman
*/

#include <Servo.h>

int pos = 0;

Servo servo;

void setup()
{
  servo.attach(4);

}

void loop()
{
  // sweep the servo from 0 to 180 degrees in steps
  // of 2 degrees
  for (pos = 0; pos <= 180; pos += 2) {
    // tell servo to go to position in variable 'pos'
    servo.write(pos);
    // wait 10 ms for servo to reach the position
    delay(10); // Wait for 10 millisecond(s)
  }
  for (pos = 180; pos >= 0; pos -= 2) {
    // tell servo to go to position in variable 'pos'
    servo.write(pos);
    // wait 10 ms for servo to reach the position
    delay(10); // Wait for 10 millisecond(s)
  }
}

