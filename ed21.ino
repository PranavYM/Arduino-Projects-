#define trigPin 13
#define echoPin 12  
#define piezo 8

void setup() 
{
  Serial.begin (9600); 
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT);  
  pinMode(piezo, OUTPUT);
}
void loop() 
{ 
  int duration,distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration*0.034)/2;
 
  if (distance > 30 && distance < 62)
  { 
    tone(piezo,1000,50);
    delay(500);
    noTone(piezo);
  }
  else if (distance > 0 && distance < 31) 
  {
    tone(piezo,1000);
    delay(500);
    noTone(piezo);
  }
  else 
  {
    delay(500);
  }
  
  Serial.print("Distance");
  Serial.println(distance);
  Serial.print(" cm");
  
} 