const int potPin = 34;

// variable for storing the potentiometer value
int potValue = 0;

void setup() {
  Serial.begin(115200);
  delay(1000);
}

void loop() {
  // Reading potentiometer value
  potValue = analogRead(potPin);
  Serial.println(potValue);
  delay(500);
  
  
  
  
  
  
  
  =============
  
  
  int sensoroutput = 3; // the analog pin connected to the sensor
int ledoutput = 0; // pin connected to LED
int THRESHOLD = 100;
void setup()
{
pinMode(ledPin, OUTPUT);   // this function is used to declare led connected pin as output
}
void loop()
{
int value = analogRead(sensoroutput);  // function to read analog voltage from sensor
if (value >= THRESHOLD)                    // function to check voltage level from sensor
{
digitalWrite(ledoutput, HIGH);
delay(100); // to make the LED visible
}
else
digitalWrite(ledoutput, LOW);
}
