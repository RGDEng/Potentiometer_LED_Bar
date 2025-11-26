// Pines de los Leds
int yellowLed = 8;
int whiteLed = 9;
int greenLed = 10;
int redLed = 11;

//Potenciometro

int potPin=A0;




void setup() {
  pinMode(yellowLed, OUTPUT);
  pinMode(whiteLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(redLed, OUTPUT);

}

void loop() {
  int potLecture=analogRead(potPin);
  int potPercentage=map(potLecture, 0,1023,0,100);

  if (potPercentage >=20){
    digitalWrite(yellowLed,HIGH);
  } else 
    digitalWrite(yellowLed, LOW);
    
  if (potPercentage >=40){
    digitalWrite(whiteLed,HIGH);
  } else 
    digitalWrite(whiteLed, LOW);
    
  if (potPercentage >=60){
    digitalWrite(greenLed,HIGH);
  } else 
    digitalWrite(greenLed, LOW);
    
  if (potPercentage >=80){
    digitalWrite(redLed,HIGH);
  } else 
    digitalWrite(redLed, LOW);




}
