tinker cad link - https://www.tinkercad.com/things/7b1VK0Z01Ld-task1-q2

QUESTION 2 (Controlling colour of RGB LED and blinking speed of an other LED with potentiometer) **writeup**

Circuit connections – 
the red, blue, green terminals of the RGB led are connected to a resistor and then to the 
Arduino pins(PWM). And the cathode, which is connected to the ground of the Arduino 
using a common ground rail in a breadboard, and the LED positive terminal is connected to
 a resistor and then to the Arduino pin. And the negative terminal is connected again to the 
ground using a common ground rail in the breadboard. VCC of the potentiometer is then 
connected to the 5 volts of the Arduino and the ground is connected to the ground rail. And
 then the wiper of the potentiometer is then connected to the analog input pin A0 of the 
Arduino.
Code explanation –
define the PWM pins 9, 10, 11 of the Arduino as red, blue, green, and also the pin 8 as a LED
 and A0 pin as the pot. And then for controlling the blinking LED , I declared and initialize 
the prev variable of unsigned long type and another variable state of boolean type and put
 in high.
 
the setup function, I set the red, blue, green LED pins as output using pinMode function 
and put the LED as high using digitalWrite for the turning on LED at the start of simulation.

the loop function. Here I use analogRead function for reading the value of potentiometer
 and stored in an potvalue variable. then converted this range of potvalue into the range of
 0-255 and 0-1000 using map function and then stored them in the variables values and 
blinkrate. And now I created another variable curr of unsigned long type, and assign millis
function to it, which returns the number of milliseconds taken from the start of the simulation
to the current variable. And again I use the same logic for controlling the blinking
of the LED, but I took the blinkrate from the potentiometer and used it in the if condition, so 
that the blink rate will be controlled through the potentiometer. And again I used 
analogWrite function to control the RGB intensities of the LED by figuring out some
 random combinations. 
 
