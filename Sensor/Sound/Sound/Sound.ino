const int Sensor = A2;
const int LED = 13;

void setup()
{
  Serial.begin(9600);
  pinMode(Sensor, INPUT);
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
}

void loop()
{
  int nilaiSensor = analogRead(Sensor);

  Serial.print("Sensor = ");
  Serial.println(nilaiSensor);

  if(nilaiSensor > 450)
  {
    digitalWrite(LED, HIGH);
    Serial.print("Sensor = ");
    Serial.print(nilaiSensor);
    Serial.print(" ===== ADA SUARA ===== ");
    delay(2000);
  }
  else
  {
    digitalWrite(LED, LOW);
  }
  delay(2);
}