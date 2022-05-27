int ledPin=8;
const int trigPin=2;
const int echoPin=3;
long duration;
int distanceCm;
int distanceInch;
int constrat;
void setup(){
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
  analogWrite(6,90);
  delay(100);
}
void loop(){
  digitalWrite(ledPin,HIGH);
  delay(1000);
  digitalWrite(ledPin,LOW);
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  distanceCm=duration*0.034/2;
  distanceInch=duration*0.0133/2;
  Serial.println();
  Serial.print("Distance:");
  Serial.print(distanceCm);
  Serial.print("Cm");
  delay(1000);

  Serial.println();
  Serial.print("Distance:");
  Serial.print(distanceInch);
  Serial.print("inch");
  delay(1000);
  
}
