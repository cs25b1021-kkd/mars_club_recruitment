#define trig 2
#define echo 3
#define buzzer 4
#define limit 100

void setup(){
  
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(trig, LOW);
  delay(3);
  
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  
  int duration = pulseIn(echo,HIGH);
  
  int distance = duration * 0.034 / 2;
  if(distance < limit) {
    Serial.println("**ALERT**");
    digitalWrite(buzzer, HIGH);
  }else{
    digitalWrite(buzzer, LOW);
  }
}
