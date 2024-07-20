//Deklarasi pin 
const int TrigPin = 9;
const int EchoPin = 10;
const int LED = 5;


void setup() {
  // put your setup code here, to run once:
  pinMode(TrigPin, INPUT);
  pinMode(EchoPin, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begins(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  long duration, distance;
  digitalWrite(TrigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(TrigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin,LOW);

  duration = pulseIn(EchoPin, HIGH);
  distance = (duration / 2) / 29.1;

  if(distance <= 20){
    digitalWrite(LED, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500);
}
