
int Led_Oben = 12;
int Led_Unten = 13;
 
void setup ()
{
  // Initialisierung Ausgangspins für die LEDs

  pinMode (Led_Oben, OUTPUT); 
  pinMode (Led_Unten, OUTPUT);
 

  oben(HIGH);
  unten(HIGH);
  
  delay(2000);
  oben(LOW);
  unten(LOW);
  delay(1000);
  
}
  
void loop () //Hauptprogrammschleife
{
   unten(HIGH);
   oben(HIGH);
   delay(500);
   unten(LOW);
   delay(500);
   unten(HIGH);
   delay(500);
   unten(LOW);
   delay(1000);
   unten(HIGH);
   delay(10000);
   oben(LOW);
   unten(LOW);
   delay(200);
}

void oben(boolean value){

    digitalWrite(Led_Oben, value);
  
}

void unten(boolean value){

    digitalWrite(Led_Unten, value);
  
}

