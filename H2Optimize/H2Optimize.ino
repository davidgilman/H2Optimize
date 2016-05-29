#define trigPin 7
#define echoPin 6
#define led 13
#define buzzer 3

int counter = 8;
int value = 0;

void setup() {
  Serial.begin(9600);
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
  delay(500);
 

  if (distance < 7) {
    digitalWrite(led,HIGH);
    analogWrite(buzzer, 10);
    String(Serial.print(counter));     
    delay(400);
    analogWrite(buzzer, 0);
}
  else {
    digitalWrite(led,LOW);
    String(Serial.print(counter));
    value = 0;
  }
  if (distance < 7 && value == 0) {
    counter = counter - 1;
    String(Serial.print(counter)); 
    value = 1; 
  }
  if (counter == 0) {
    counter = 8;
  }

}
