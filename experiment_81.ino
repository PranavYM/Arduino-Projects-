void setup() 
{
  pinMode(4, OUTPUT); 
  pinMode(12, OUTPUT); 
  pinMode(7, OUTPUT); 
  pinMode(2, OUTPUT); 
  pinMode(8, OUTPUT); 
  Serial.begin(9600);
}

void loop() 
{
  int pin[] = {4,12,7,2,8}; 
  for(int i = 0;i < 5;i++)
  {
    for(int j = 255;j >=0;j=j-10) 
    {
      analogWrite(pin[i], j);
      analogWrite(pin[i], j);
      }
    }
  
  for(int i = 4;i >= 0;i--)
  {
    for(int j = 255;j >=0;j=j-10)
    {
      analogWrite(pin[i], j);
      delay(100);
    }
  }
}