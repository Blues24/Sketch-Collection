//Sensor ultrasonic
//Made by Blues24

const int SensorJarak = 9;
const int lampu = 4;


void setup () {
  Serial.Begin(9600);//Inisialisasi Komunikasi serial
  pinMode(SensorJarak, INPUT);//Menjadikan pin output sensor menjadi input di mikrokontroler
  pinMode(lampu, OUTPUT);//Menjadikan pin LED menjadi otput di mikrokontroler
  digitalWrite(lampu, LOW);//Mengubah kondisi LED agar tidak menyala di awal mikrokontroler dinyalakan
}

void loop(){
  int result = digitalRead(SensorJarak);
  if(result == LOW){
    Serial.println("Ada orang didepan!");
    digitalWrite(lampu, HIGH);
  }
  else {
    Serial.println("Aman")
    digitalWrite(lampu, LOW);
  }
}