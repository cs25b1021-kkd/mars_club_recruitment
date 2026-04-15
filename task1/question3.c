#define led 3
#define button 5

bool ledstate = LOW;
unsigned long prev = 0;
int interval;

void setup(){
  pinMode(led,OUTPUT);
  pinMode(button,INPUT_PULLUP);
  Serial.begin(9600);
}

void loop(){
  
  if(!ledstate){
  digitalWrite(led, LOW);
  
  interval = random(1000, 3000);
  
  int waittime = interval;
  delay(waittime);
  digitalWrite(led, HIGH);
  ledstate = HIGH;
  }  
  
  if(ledstate == HIGH && digitalRead(button) == LOW ) {
    
    unsigned long curr = millis();
    int gap = curr - prev - interval;
    prev = curr;
    ledstate = LOW;
    Serial.println(gap);
   
  }
  
}
