tinkercad link - https://www.tinkercad.com/things/i48Mlmk9K6Q-task1-q1

QUESTION 1 (Blinking LED with different time interval) **writeup**

Circuit connections -
I have connected the + terminals of the LEDs to the digital pins of Arduino (D2, D3, D4) and
set them as output. And connected the - terminals of the LEDs to their resistors and then to 
the ground of the Arduino using a railing in the breadboard.
Code explanation –
Here, I took three variables of unsigned long type, prev1, prev2, and prev3. I used unsigned 
long type because these were used to store the milliseconds, and they might go larger 
values. And initialize them with zero. The point of these variables will store the time of the
 previous timestamps. And I took another three Boolean variables, named state1, state2, 
state3, and set them as high initially(True). And defined the pins of the LED that are 
connected with led as LED1, LED2, and LED3.
And in the setup function, I set the LED1, LED2, and LED3 pins as output using pinMode
 fuction. I put the led pins as HIGH so that the all LEDs will be on right after the start and 
blink simultaneously.
In the loop function, here I initialize a new variable curr, in unsigned long format and given
 it with millis function, which returns the number of milliseconds from the simulation has 
started to the curr variable and the curr variable stores it. And now, the 1st if block, there 
are three if blocks in this loop function for 3 leds respectively.  And in 1st if block, the 
condition we are checking is that curr minus prev, which is like current time minus previous
 time(initially 0). If current time is greater than or equal to 500(interval >= 500), if statement 
executes, that is current time greater than 500, then the if statement enables and the
statements inside the if block executes, previous assigned to current. after the curr 
becomes greater than 500, this sets into the new mode, and the current 500 becomes the
 previous. And the state 1, till now, the state 1 of the LED is high, as said that LED high in the
 setup. And now, this has to be changed as we need it to be blinking. So the state 1 is 
assigned to !state 1. And now, we assign the LED to state 1 using digital write command.
 Which means earlier it was high before 500. And now, once the current exceeds the 500,
 the 500 becomes the old timestamp(prev) and now the state 1 is being changed to the new
 state 1, which has been in low, is assigned to the LED. And similarly, the same kind of logic 
will be also followed for the LED2 and LED3, where we use 1000 and 1500 milliseconds in 
place of 500 seconds in case of the LED1, according to the question.
