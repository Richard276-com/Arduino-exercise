int led_rosso = 13;
int led_giallo = 12;
int led_verde = 2;

void setup()
{
  pinMode(led_rosso, OUTPUT);
  pinMode(led_giallo, OUTPUT);
  pinMode(led_verde, OUTPUT);
}

void loop()
{
  //Rosso
  digitalWrite(led_rosso, HIGH);
  delay(1000);
  digitalWrite(led_rosso, LOW);
  delay(1000);
  
  //Giallo
  digitalWrite(led_giallo, HIGH);
  delay(1000);
  digitalWrite(led_giallo, LOW);
  delay(1000);
  
  //Verde
  digitalWrite(led_verde, HIGH);
  delay(1000);
  digitalWrite(led_verde, LOW);
  delay(1000);
}