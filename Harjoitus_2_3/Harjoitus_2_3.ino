void setup() //määritetään setup funktio
{
  pinMode(12, OUTPUT); //Määritetään pin nro 12 outputiksi
  Serial.begin(9600); //Aloitetaan sarjaporttiyhteys
}

void loop() //määritetään loop funktio
{
  digitalWrite(12, HIGH); //Laitetaan led päälle
  Serial.println("Led ON"); //Tulostetaan sarjaporttiin "Led ON"
  delay(2000); // Odotetaan 2000 ms
  digitalWrite(12, LOW); //Sammutetaan led
  Serial.println("LED OFF"); //Tulostetaan sarjaporttiin "LED OFF"
  delay(2000); // Odotetaan 2000 ms
}
