#define echopin 2 
#define trigPin 3

long duration;
int distance;

void setup()
{
pinMode(trigPin, OUTPUT); 
pinMode(echopin, INPUT); 
Serial.begin(9600);
}
void loop()
{
digitalWrite(trigPin, LOW);
delayMicroseconds (2);
digitalWrite(trigPin, HIGH); 
delayMicroseconds (10);
digitalWrite(trigPin, LOW); 
duration = pulseIn(echopin, HIGH); 
distance = duration  * 0.034 / 2; 
Serial.print("Distance: "); 
Serial.print(distance); 
Serial.println(" cm");
}