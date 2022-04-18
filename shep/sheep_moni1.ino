int i=0;
int p1=8;
int p2=7;
void setup()
{
  pinMode(p1, INPUT);
  pinMode(p2,INPUT);
  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(p1)==1)
  {
    delay(2000);
    if(digitalRead(p2)==1);
    { i++;Serial.println(i);}
  }
  if(digitalRead(p2)==1)
  {
    delay(2000);
    if(digitalRead(p1)==1);
    { i--;Serial.println(i);}
  }
  
}