#include <Arduino.h>


#define DEL 3


void setup()
{
  pinMode(2,OUTPUT);
   pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
     pinMode(5,OUTPUT);
}

void loop()
{
   for(int i=0;i<100;i++)
   {
    digitalWrite(2,HIGH);
    delay(DEL);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    delay(DEL);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    delay(DEL);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    delay(DEL);
    digitalWrite(5,LOW);

   }
   for(int j=0;j<100;j++)
   {
    digitalWrite(5,HIGH);
    delay(DEL);
    digitalWrite(5,LOW);
    digitalWrite(4,HIGH);
    delay(DEL);
    digitalWrite(4,LOW);
    digitalWrite(3,HIGH);
    delay(DEL);
    digitalWrite(3,LOW);
    digitalWrite(2,HIGH);
    delay(DEL);
    digitalWrite(2,LOW);

   }

}
