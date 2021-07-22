int ledPin=9; 
void setup() 
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}
void loop() 
{
  int count=0;
  for(int i=0; i<=255;i+=5) 
  {
    analogWrite(ledPin, i);
    delay(1000);
    count++; 
    Serial.print("Count"); 
    Serial.print(" "); 
    Serial.println(i);
  }
  for(int i=255;i>=255; i-=5)
  {
    analogWrite(ledPin,i);
    delay(1000); 
    Serial.println(i);
  }
}