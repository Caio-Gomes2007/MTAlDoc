int sensorValue;
int digitalValue;

void setup()
{
  Serial.begin(9600); // sets the serial port to 9600
  pinMode(13, OUTPUT);
  pinMode(8, INPUT);
}

void loop()
{
  sensorValue = analogRead(1); // read analog input pin 0
  digitalValue = digitalRead(2);
  if (sensorValue > 180)
  {
    digitalWrite(13, HIGH);
  }
  else
    digitalWrite(13, LOW);
  Serial.println(sensorValue, DEC); // prints the value read
  Serial.println(digitalValue, DEC);
  delay(100); // wait 100ms for next reading
}