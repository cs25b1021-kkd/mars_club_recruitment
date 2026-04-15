#define potpin A0
#define button 7
#define PWM 3
#define terminal1 13
#define terminal2 12
bool buttonstatus;



void setup(){
  pinMode(terminal1,OUTPUT);
  pinMode(terminal2, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  pinMode(PWM, OUTPUT);
  pinMode(potpin, INPUT);
}

void loop(){
  int value = analogRead(potpin);
  int speed = map(value, 0, 1023, 0, 255);
   buttonstatus = digitalRead(button);
  
  if(buttonstatus){
    digitalWrite(terminal1, LOW);
    digitalWrite(terminal2, HIGH);
  }else{
    digitalWrite(terminal1, HIGH);
    digitalWrite(terminal2, LOW);
  }

  analogWrite(PWM, speed);
  
}
