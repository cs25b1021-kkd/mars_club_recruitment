#define ENA 5
#define ENB 6

#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 7

#define TRIG_FRONT 8
#define ECHO_FRONT 9

#define TRIG_LEFT 10
#define ECHO_LEFT 11

#define TRIG_RIGHT 12
#define ECHO_RIGHT 13


int speedVal = 180;     // motor speed (0–255)
int safeDist = 20;      // distance in cm


void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(TRIG_FRONT, OUTPUT);
  pinMode(ECHO_FRONT, INPUT);

  pinMode(TRIG_LEFT, OUTPUT);
  pinMode(ECHO_LEFT, INPUT);

  pinMode(TRIG_RIGHT, OUTPUT);
  pinMode(ECHO_RIGHT, INPUT);

  Serial.begin(9600);
}


void loop() {

  int front = getDistance(TRIG_FRONT, ECHO_FRONT);
  int left  = getDistance(TRIG_LEFT, ECHO_LEFT);
  int right = getDistance(TRIG_RIGHT, ECHO_RIGHT);

  Serial.print("F: "); Serial.print(front);
  Serial.print(" L: "); Serial.print(left);
  Serial.print(" R: "); Serial.println(right);

  if (front > safeDist) {
    moveForward();
  }
  else {
    stopMotors();
    delay(200);

    if (left > right) {
      turnLeft();
      delay(400);
    }
    else {
      turnRight();
      delay(400);
    }
  }

  delay(100);
}


int getDistance(int trig, int echo) {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  long duration = pulseIn(echo, HIGH);
  int distance = duration * 0.034 / 2;

  return distance;
}



void moveForward() {
  analogWrite(ENA, speedVal);
  analogWrite(ENB, speedVal);

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void moveBackward() {
  analogWrite(ENA, speedVal);
  analogWrite(ENB, speedVal);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void turnLeft() {
  analogWrite(ENA, speedVal);
  analogWrite(ENB, speedVal);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void turnRight() {
  analogWrite(ENA, speedVal);
  analogWrite(ENB, speedVal);

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void stopMotors() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
