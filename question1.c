#define led1 2
#define led2 3
#define led3 4

unsigned long prev1 = 0;
unsigned long prev2 = 0;
unsigned long prev3 = 0;

bool state1 = HIGH;
bool state2 = HIGH;
bool state3 = HIGH;


void setup(){
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
}

void loop(){
  unsigned long curr = millis();
  if(curr - prev1 >= 500) {
    prev1 = curr;
    state1 = !state1;
    digitalWrite(led1,state1);
  }
  
  if(curr - prev2 >= 1000) {
    prev2 = curr;
    state2 = !state2;
    digitalWrite(led2,state2);
  }
  
  if(curr - prev3 >= 1500) {
    prev3 = curr;
    state3 = !state3;
    digitalWrite(led3,state3);
  }
}
