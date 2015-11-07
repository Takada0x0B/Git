void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
}
void loop()
{
  digitalWrite(3,HIGH);
  
  digitalWrite(2,HIGH);
  delay(10);
  digitalWrite(2,LOW);
  delay(10);
}
