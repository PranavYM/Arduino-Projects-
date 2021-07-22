void setup()
{
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}
void loop()
{
  int arr[5]={5,6,9,10,11};
  for(int i=0;i<=4;i++)
  {
    digitalWrite(arr[i],HIGH);
    delay(1000);
    digitalWrite(arr[i],LOW);
    delay(1000);
  }
  for(int i=4;i>=0;i--)
  {
    digitalWrite(arr[i],HIGH);
    delay(1000);
    digitalWrite(arr[i],LOW);
    delay(1000);
  }
}