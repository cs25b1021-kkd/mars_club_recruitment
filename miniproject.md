tinkercad link - https://www.tinkercad.com/things/eA2G7OB80Pw-mini1

simulation vedio - https://drive.google.com/file/d/1BXtY8sC3WwdP1qtiw1uukyU-g5H-oS87/view?usp=drive_link


MINI PROJECT (Smart Distance Alert System) writeup

What it does – 
Detects any obstacle that closer that 100cm (1m) to the sensors and alerts if there any.

Why I choose this – 
We use the similar system in our rover.

Components used – 
Arduino uno, 1 HC – SR04 ultrasonic sensors, buzzer, bread board.

Circuit connections –  
I connected the trig and echo pin of the ultrasonic sensors to the Arduino, and the VCC pin 
to the 5 volts of the Arduino, and the ground of the ultrasonic sensor to the ground railing of
 the breadboard. And similarly, the + terminal of the buzzer is connected to the Arduino and
 the – terminal is connected to a ground railing of the breadboard, which is then connected 
to the ground of the Arduino.

Code explanation –
Here, I defined the 2,3,4 of Arduino pins as trig, echo, and buzzer. And in the setup function,
 I set trig and buzzer as output and echo as input using the pinMode function. In the loop 
function, using the classic technique of measuring the distance using the ultrasonic 
sensor, setting the ultrasonic sensor's trig to low and using the delay of few seconds for
 check, and then setting up the trig in high for sending the ultrasonic sounds and giving it a
 delay of small time like 10 microseconds, and then setting the trig again to low. And now
 the time taken to return is calculated by measuring how much time the echo is in high by
 using a pulseIn function. And this duration time is converted into distance using the speed
 of sound and the relation between the speed, distance, and time relation. And now, we use
 an if-else to check if the distance is less than 100. If the distance is less than 100, it prints 
alert in the serial monitor and also turns on the buzzer by putting it in high using the
digitalWrite function. And this continues until and unless the obstruction distance is 
greater than 100. So, if the distance is less than 100 the else block executes and  turn of the
 buzzer by putting in low using the digitalWrite function and stops printing alert in serial 
monitor.

