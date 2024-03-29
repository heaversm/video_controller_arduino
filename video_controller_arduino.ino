int analogPin = 0;
int analogValue = 0;
int pwmValue = 0;

void setup()
{
  // start serial port at 9600 bps:
  Serial.begin(9600);
}

void loop()
{
  // read analog input, divide by 4 to make the range 0-255:
  analogValue = analogRead(analogPin);
  analogValue = analogValue / 4;
  
  //Serial.println(analogValue);
  Serial.write(analogValue); //Write this value so it is available to processing
  
  // pause for 10 milliseconds:
  delay(10);
}
