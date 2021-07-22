int i=0;
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available())
  {
    i= Serial.parseInt();
    Serial.println(i);
    analogWrite(3,0);
    analogWrite(5,0);
    analogWrite(6,0);
    analogWrite(9,0);
    analogWrite(11,0);
  }
  if(i<=50)
  {
    analogWrite(11,i);
  }
  else if(i<=100)
  {
  	analogWrite(9,i);
  }
  else if(i<=150)
  {
  	analogWrite(6,i);
  }
  else if(i<=200)
  {
  	analogWrite(5,i);
  }
  else if(i<=255)
  {
  	analogWrite(3,i);
  }
}