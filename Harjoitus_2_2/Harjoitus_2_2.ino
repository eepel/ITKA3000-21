int valo1 = 7; //määritetään valopinnin numero globaalina
int valo2 = 6; //määritetään valopinnin numero globaalina
int valo3 = 5; //määritetään valopinnin numero globaalina
int nappi = 2; //määritetään nappipinnin numero globaalina
int napinTila = 0; //määritetään aluksi pois päältä

void setup() //määritellään setup funktio
{
  pinMode(valo1, OUTPUT);  //määritetään pin 7 outputpinniksi
  pinMode(valo2, OUTPUT); //määritetään pin 6 outputpinniksi
  pinMode(valo3, OUTPUT); //määritetään pin 5 outputpinniksi
  pinMode(nappi, INPUT); //määritetään pin 2 inputpinniksi
}

void loop() //määritellään toistuva funktio (loop)
{
  napinTila = digitalRead(nappi); //luetaan tuleeko nappi pinniin jännitettä
  if(napinTila == 1){ //verrataan onko onko tila 1 vai ei jos on ==>
      digitalWrite(valo1, HIGH); //valo 1 päälle
      digitalWrite(valo2, HIGH); //valo 2 päälle
      digitalWrite(valo3, HIGH); //valo 3 päälle
  } else{ //napin tila ei ole 1 ==>
      digitalWrite(valo1, LOW); //valo 1 pois päältä
      digitalWrite(valo2, LOW); //valo 2 pois päältä
      digitalWrite(valo3, LOW); //valo 3 pois päältä

  }
}
