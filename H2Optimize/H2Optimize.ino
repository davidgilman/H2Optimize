#define trigPin 7
#define echoPin 6
#define led 13
#define buzzer 3

int sound = 250;


void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
 
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
 

<<<<<<< Updated upstream
  if (distance <= 30) {
    digitalWrite(led,HIGH);
    analogWrite(buzzer, 10);
    delay(500);
    analogWrite(buzzer, 0);
=======
  if (distance <= 15) {
    digitalWrite(led, HIGH);
>>>>>>> Stashed changes
}
  else {
    digitalWrite(led,LOW);
  }
  delay(500);
}
