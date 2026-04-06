tinkercad link - https://www.tinkercad.com/things/exKrdIMNClL-task3q3

QUESTION 3 (Build a reaction time tester) **writeup**

Circuit connections –  
Here, I connected the one side terminal of button to the Arduino pin and the other to the 
ground using common ground rail of breadboard. And similarly, the positive terminal of the
 LED is given to a resistor and then to an Arduino pin for controlling the LED and the 
negative is given to the common ground rail of the breadboard, which is then connected to 
ground of Arduino.
Code explanation –
I defined 3, 5 Arduino pins as led and button respectively, and then declare and initialize a
 Boolean variable ledstate to low, and a prev variable of unsigned long time as zero. And 
then declared an variable interval.
the setup function, I put the led in output mode using pinMode function, and button in 
input_pullup using pinMode function.
 the loop function, here I used two if blocks. The first if block checks if the LED is low or not,
 and this if block executes if the LED is low, that is off. if the LED is low, it sets the LED again
 to the low for check, and then it creates some random time for the interval from the range 
of 1,000 to 3,000, and this is what we use as the random blinkage time for the LED. So the 
interval is now initialized to wait time, and this wait time delay happens. And after this 
delay, the LED blinks immediately, and the LED state moves on to high, indicating that LED
 is on. This is the end of first if block, and the second if block, it checks if the LED state is 
high and the button is pressed or not. It first checks the LED state is high, that is, if the LED
 is on, and then it checks the button pressed or not. If both are satisfied, that is, LED is on 
and button is pressed, it creates a current variable of unsigned long type and stores the 
millis function, which returns the number of milliseconds from the start to present. It 
creates a new variable, gap. This is the time taken by the user to react, which is calculated
 by curr minus prev minus the interval which we used after the simulation started to blink 
the LED. And after this, we assign curr to prev for the next operation and the LED state as 
low. And then, we print the gap in the serial monitor using Serial.println function. This 
happens in a loop. Here, what's basically happening is, using two if blocks as two blocks
. The first if block won't be happened until the second if block is happened. That is, the LED
 will be turned off all the time until the button is pressed. For this, we use a logic ledstate 
low. The ledstate will be high after the 1st if block has happened and it will be high, but it 
executes only if it's low. So, if the 2nd  if block didnt, execute which consists ledstate low, 1st
  if block won't be happened. Means, the LED will be always turned off unless the second if 
block happens. So, this acts as a lock mechanism and prints the gap in the serial monitor, 
which is nothing but the time taken by the user to react
