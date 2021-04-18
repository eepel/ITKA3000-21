void setup() //määritellään setup funktio
{
  pinMode(7, OUTPUT);  //määritetään pin 7 outputpinniksi
  pinMode(6, OUTPUT); //määritetään pin 6 outputpinniksi
  pinMode(5, OUTPUT); //määritetään pin 5 outputpinniksi
}

void loop() //määritellään toistuva funktio (loop)
{
  led1(); //kutsutaan metodia led1
  led2(); //kutsutaan metodia led2
  led3(); //kutsutaan metodia led3
}

void led1(){  //määritellään led1 funktio
  digitalWrite(7, HIGH);  //laitetaan pin 7 jännitteelliseksi (led palaa)
  delay(300);  //odotetaan 300 ms tehtävänannon mukaisesti
  digitalWrite(7, LOW);  //laitetaan pin 7 jännitteettömäksi (led ei pala)
}
void led2(){  //määritellään led2 funktio
  digitalWrite(6, HIGH);  //laitetaan pin 6 jännitteelliseksi (led palaa)
  delay(300);  //odotetaan 300 ms tehtävänannon mukaisesti
  digitalWrite(6, LOW);  //laitetaan pin 6 jännitteettömäksi (led ei pala)
}
void led3(){  //määritellään led3 funktio
  digitalWrite(5, HIGH);  //laitetaan pin 5 jännitteelliseksi (led palaa)
  delay(300);  //odotetaan 300 ms tehtävänannon mukaisesti
  digitalWrite(5, LOW);  //laitetaan pin 5 jännitteettömäksi (led ei pala)
}
