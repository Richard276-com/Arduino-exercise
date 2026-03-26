int led_rosso1 = 13;
int led_giallo1 = 12;
int led_verde1 = 11;

int led_rosso2 = 10;
int led_giallo2 = 9;
int led_verde2 = 8;

int led_rosso3 = 7;
int led_giallo3 = 6;
int led_verde3 = 5;

int led_rosso4 = 4;
int led_giallo4 = 3;
int led_verde4 = 2;



void setup()
{
  //Semaforo 1
  pinMode(led_rosso1, OUTPUT);
  pinMode(led_giallo1, OUTPUT);
  pinMode(led_verde1, OUTPUT);
  
  //Semaforo 2
  pinMode(led_rosso2, OUTPUT);
  pinMode(led_giallo2, OUTPUT);
  pinMode(led_verde2, OUTPUT);
  
  //Semaofor 3
  pinMode(led_rosso3, OUTPUT);
  pinMode(led_giallo3, OUTPUT);
  pinMode(led_verde3, OUTPUT);
  
  //Semaforo 4
  pinMode(led_rosso4, OUTPUT);
  pinMode(led_giallo4, OUTPUT);
  pinMode(led_verde4, OUTPUT);
  
}

void loop()
{
  //Semaforo 1
  digitalWrite(led_rosso1, HIGH);
  digitalWrite(led_giallo1, LOW);
  digitalWrite(led_verde1, LOW);
  delay(1000);
  digitalWrite(led_rosso1, LOW);
  digitalWrite(led_giallo1, HIGH);
  digitalWrite(led_verde1, LOW);
  delay(1000);
  digitalWrite(led_rosso1, LOW);
  digitalWrite(led_giallo1, LOW);
  digitalWrite(led_verde1, HIGH);
  delay(1000);
  digitalWrite(led_verde1, LOW);
  delay(1000);
  
  //Semaforo 2
  digitalWrite(led_rosso2, HIGH);
  digitalWrite(led_giallo2, LOW);
  digitalWrite(led_verde2, LOW);
  delay(1000);
  digitalWrite(led_rosso2, LOW);
  digitalWrite(led_giallo2, HIGH);
  digitalWrite(led_verde2, LOW);
  delay(1000);
  digitalWrite(led_rosso2, LOW);
  digitalWrite(led_giallo2, LOW);
  digitalWrite(led_verde2, HIGH);
  delay(1000);
  digitalWrite(led_verde2, LOW);
  delay(1000);
  
  //Semaforo 3
  digitalWrite(led_rosso3, HIGH);
  digitalWrite(led_giallo3, LOW);
  digitalWrite(led_verde1, LOW);
  delay(1000);
  digitalWrite(led_rosso3, LOW);
  digitalWrite(led_giallo3, HIGH);
  digitalWrite(led_verde3, LOW);
  delay(1000);
  digitalWrite(led_rosso3, LOW);
  digitalWrite(led_giallo3, LOW);
  digitalWrite(led_verde3, HIGH);
  delay(1000);
  digitalWrite(led_verde3, LOW);
  delay(1000);
  
  //Semaforo 4
  digitalWrite(led_rosso4, HIGH);
  digitalWrite(led_giallo4, LOW);
  digitalWrite(led_verde4, LOW);
  delay(1000);
  digitalWrite(led_rosso4, LOW);
  digitalWrite(led_giallo4, HIGH);
  digitalWrite(led_verde4, LOW);
  delay(1000);
  digitalWrite(led_rosso4, LOW);
  digitalWrite(led_giallo4, LOW);
  digitalWrite(led_verde4, HIGH);
  delay(1000);
  digitalWrite(led_verde4, LOW);
  delay(1000);
  
}