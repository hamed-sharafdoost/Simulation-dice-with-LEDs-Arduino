
int dice = 0;
void setup() 
{
pinMode(2,INPUT);
for(int i = 3;i <=8;i++)
{
  pinMode(i,OUTPUT);
}
}

void loop()
{
  if(digitalRead(2) == HIGH)
  {
   dice = random(1,7);
   dice = dice+2;
   for(int i = 2;i<=dice;i++)
   {
     digitalWrite(i,HIGH);
   }
    delay(1000);
    for(int i = 2;i<=dice;i++)
   {
     digitalWrite(i,LOW);
   }
  }

}