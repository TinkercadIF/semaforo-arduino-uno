int pinLedRed = 8 ;
int pinLedYellow = 7 ;
int pinLedGreen = 6 ;

void setup()
{
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  digitalWrite(pinLedRed, HIGH);
  delay(1000); 
  digitalWrite(pinLedRed, LOW);
  delay(500); 
  
  digitalWrite(pinLedYellow, HIGH);
  delay(1000); 
  digitalWrite(pinLedYellow, LOW);
  delay(500);
  
  digitalWrite(pinLedGreen, HIGH);
  delay(1000); 
  digitalWrite(pinLedGreen, LOW);
  delay(500);
}
