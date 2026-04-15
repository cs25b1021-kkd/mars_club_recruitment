#define red 9
#define blue 10
#define green 11
#define led 8
#define pot A0

unsigned long prev = 0;
bool state = HIGH;

void setup(){
  
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(led,OUTPUT);
  digitalWrite(led, HIGH);
  Serial.begin(9600);
}

void loop(){
  
  int potval = analogRead(pot);
  int value = map(potval, 0, 1023, 0, 255);
  int blinkrate = map(potval, 0, 1023, 0, 1000);
  Serial.println(potval);
  Serial.print(blinkrate);
  
  unsigned long curr = millis();
  if (curr - prev >= blinkrate){
    prev = curr;
    state = !state;
    digitalWrite(led, state);
  }
  
  analogWrite(red, value);
  analogWrite(blue, 255 - value);
  analogWrite(green, value/2);
  
}
