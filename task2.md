**TASK2** - Control the speed of a motor using a potentiometer and the direction of the same motor
with a push button.


**Components used:** Arduino Uno, L298N motor driver, motor, push button, potentiometer, 
jumper wires.

**Circuit connections :**
At first, I took the motor driver. As we were only using one motor, I considered only one 
section of the motor driver. I connected 2 output pins to the motor terminals and 
connected the input pins to the Arduino. Input pin 1 to Arduino pin 13 and input pin 2 to the
 Arduino pin 12. And then I connected the two grounds of the motor driver to the ground 
railing of the breadboard, which is considered as a common ground throughout the 
process. And then I connected an EN, ENABLE pin of a motor driver to the PWM pin of an
 Arduino, pin 3. And also connected the push button one terminal to the ground and the
 other terminal to the Arduino pin 7. And then I took a potentiometer. I connected the
 negative of the potentiometer to the ground, common ground, and analog output pin of a
 potentiometer to the analog input pin A0 of Arduino. And then a VCC pin of potentiometer
 to the 5V logic. And also connected the Arduino ground pin to the breadboard common 
ground railing.

I defined a few pins, potpin as A0, and button 7, and PWM 3, terminal1 as 13 and terminal2 
as 12.
**Code Explaination**-

**The setup function,**
 I set the Arduino pin 13 to the output and 12 to output, which I used to connect to the 
motor for powering them. And pin 7, which is connected to a button, as input_pullup, which
 makes keeps it in high as default rather than keeping it in low. And then, pin 3, which is a 
PWM pin, used for controlling motor as output and potpin A0 pin as input. And then, in the

**the loop function,**
 I declared a variable called value, which is assigned to a function
 analogRead potpin, which literally means it reads the potentiometer reading and then
 stores in a variable called value. And then, I declared another variable called speed and
 assigned a map function to it, what it does is converts the value of potentiometer reading
 from a range of 0 to 1023 to a range of 0 to 255. And then, I declared a variable called 
buttonStatus, which then assigned to digitalRead button, which means if the button is off,
 it will be high as we use input pull-up. And if the button is pressed, it will be low. And then, I
 used if and else condition . If the buttonStatus is 1high, digitalWrite terminal 1 and 2 as 
high and low respectively, which means the motor will run in one direction. And in else 
block, I put terminal 1 and 2 as low and high respectively, which means the motor will run
 in the opposite direction of the previous. And then, I used analogWrite for PWM pin 
controlling the speed of the motor.


