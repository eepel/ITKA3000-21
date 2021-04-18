void setup() //määritellään setup funktio
{
  pinMode(7, OUTPUT);  //määritetään pin 7 outputpinniksi
  pinMode(6, OUTPUT); //määritetään pin 6 outputpinniksi
  pinMode(5, OUTPUT); //määritetään pin 5 outputpinniksi
}

void loop() //määritellään toistuva funktio (loop)
{
  led1(); //kutsutaan led1 funktiota (väläytetään lediä)
  led1(); //kutsutaan led1 funktiota (väläytetään lediä)
  led1(); //kutsutaan led1 funktiota (väläytetään lediä)
  ledKaikki(); //kutsutaan ledKaikki funktiota (väläytetään kaikkia ledejä)
  led2(); //kutsutaan led1 funktiota (väläytetään lediä)
  led2(); //kutsutaan led1 funktiota (väläytetään lediä)
  led2(); //kutsutaan led1 funktiota (väläytetään lediä)
  ledKaikki(); //kutsutaan ledKaikki funktiota (väläytetään kaikkia ledejä)
  led3(); //kutsutaan led1 funktiota (väläytetään lediä)
  led3(); //kutsutaan led1 funktiota (väläytetään lediä)
  led3(); //kutsutaan led1 funktiota (väläytetään lediä)
  ledKaikki(); //kutsutaan ledKaikki funktiota (väläytetään kaikkia ledejä)

}

void led1(){  //määritellään led1 funktio
  digitalWrite(7, HIGH);  //laitetaan pin 7 jännitteelliseksi (led palaa)
  delay(300);  //odotetaan 300 ms tehtävänannon mukaisesti
  digitalWrite(7, LOW);  //laitetaan pin 7 jännitteettömäksi (led ei pala)
  delay(300);  //odotetaan 300 ms, jotta nähdään valon sammuminen
}
void led2(){  //määritellään led2 funktio
  digitalWrite(6, HIGH);  //laitetaan pin 6 jännitteelliseksi (led palaa)
  delay(300);  //odotetaan 300 ms tehtävänannon mukaisesti
  digitalWrite(6, LOW);  //laitetaan pin 6 jännitteettömäksi (led ei pala)
  delay(300);  //odotetaan 300 ms, jotta nähdään valon sammuminen

}
void led3(){  //määritellään led3 funktio
  digitalWrite(5, HIGH);  //laitetaan pin 5 jännitteelliseksi (led palaa)
  delay(300);  //odotetaan 300 ms tehtävänannon mukaisesti
  digitalWrite(5, LOW);  //laitetaan pin 5 jännitteettömäksi (led ei pala)
  delay(300);  //odotetaan 300 ms, jotta nähdään valon sammuminen

}
void ledKaikki(){  //määritellään ledKaikki funktio
  digitalWrite(7, HIGH);  //laitetaan pin 7 jännitteelliseksi (led palaa)
  digitalWrite(6, HIGH);  //laitetaan pin 6 jännitteelliseksi (led palaa)
  digitalWrite(5, HIGH);  //laitetaan pin 5 jännitteelliseksi (led palaa)
  delay(300);  //odotetaan 300 ms tehtävänannon mukaisesti
  digitalWrite(5, LOW);  //laitetaan pin 5 jännitteettömäksi (led ei pala)
  digitalWrite(6, LOW);  //laitetaan pin 6 jännitteettömäksi (led ei pala)
  digitalWrite(7, LOW);  //laitetaan pin 7 jännitteettömäksi (led ei pala)
  delay(300);  //odotetaan 300 ms, jotta nähdään valon sammuminen

}
