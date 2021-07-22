int incomingByte=0; 

void setup()
{
  Serial.begin(9600);
  
  for(int i=0;i<40;i++)
  {
    Serial.print("*");
  }
  Serial.print("\n");
  Serial.print("R.No.: 101906108");
  Serial.print("\n");
  for(int i=0;i<30;i++)
  {
    Serial.print("*");
  }
  Serial.print("\n");
  Serial.print("Name: Pranav Yogesh Mahajan");
  Serial.print("\n");
  for(int i=0;i<35;i++)
  {
    Serial.print("*");
  }
  Serial.print("\n");
  Serial.print("Branch: ECE");
  Serial.print("\n");
  for(int i=0;i<32;i++)
  {
    Serial.print("*");
  }
}
void loop()
{
  
}
