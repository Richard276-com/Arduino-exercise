int led_rosso = 13;
int led_giallo = 12;
int led_verde = 11;
int Bottone = 2;

void setup() {
  pinMode(led_rosso, OUTPUT);
  pinMode(led_giallo, OUTPUT);
  pinMode(led_verde, OUTPUT);
  pinMode(Bottone, INPUT);
}

void loop() {
  if(digitalRead(Bottone) == HIGH) {
  
  //Semaforo rosso
  digitalWrite(led_rosso, HIGH);
  digitalWrite(led_giallo, LOW);
  digitalWrite(led_verde, LOW);
  delay(1500);
  
  //Semaforo giallo
  digitalWrite(led_rosso, LOW);
  digitalWrite(led_giallo, HIGH);
  digitalWrite(led_verde, LOW);
  delay(1500);
  
  //Semaforo verde
  digitalWrite(led_rosso, LOW);
  digitalWrite(led_giallo, LOW);
  digitalWrite(led_verde, HIGH);
  delay(1000);
    
  //Semafoto spento
  digitalWrite(led_rosso, LOW);
  digitalWrite(led_giallo, LOW);
  digitalWrite(led_verde, LOW);
  
  }
  
}