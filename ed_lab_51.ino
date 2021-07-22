int trigpin=13;
int echopin=12;
int duration;
int distanceCm;
int led_red=11;
int led_orange=10;
int led_grey=9;
int led_yellow=6;
int led_blue=5;
int led_green=3;

void setup()
{
  Serial.begin(9600);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(led_red,OUTPUT);
  pinMode(led_orange,OUTPUT);
  pinMode(led_grey,OUTPUT);
  pinMode(led_yellow,OUTPUT);
  pinMode(led_blue,OUTPUT);
  pinMode(led_green,OUTPUT);
}

void loop()
{
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigpin, LOW);
  duration=pulseIn(echopin,HIGH);
  distanceCm=(duration*0.034)/2;
  
  if (distanceCm >0 && distanceCm <=25)
  {
    digitalWrite(led_red,HIGH);
    delay(1000);
    digitalWrite(led_red,LOW);
  }
  else if (distanceCm >=26 && distanceCm <=50)
  {
     digitalWrite(led_orange,HIGH);
     delay(1000);
     digitalWrite(led_orange,LOW);
  }
  else if (distanceCm >50 && distanceCm <100)
  {
     digitalWrite(led_grey,HIGH);
     delay(1000);
     digitalWrite(led_grey,LOW);
  }
  else if (distanceCm >100 && distanceCm <200)
  {
     digitalWrite(led_yellow,HIGH);
     delay(1000);
     digitalWrite(led_yellow,LOW);
  }
  else if (distanceCm >=200 && distanceCm <300)
  {
     digitalWrite(led_blue,HIGH);
     delay(1000);
     digitalWrite(led_blue,LOW);
  }
  else if (distanceCm >300)
  {
     digitalWrite(led_green,HIGH);
     delay(1000);
     digitalWrite(led_green,LOW);
  }
  Serial.print("Distance");
  Serial.println(distanceCm);
  Serial.print(" cm");
}