#include <Arduino.h>
#include <EEPROM.h>

void setup() {
  Serial.begin(9600);
  const char* isaque = "isaque";
  for (int i = 0; i < 6; i ++)
  {
    EEPROM.update(i,isaque[i]);
  }
}

int freeRam () 
{
extern int __heap_start, *__brkval; 
int v; 
return (int) &v - (__brkval == 0 ? (int) &__heap_start : (int) __brkval); 
}


void SendData()
{
  Serial.println(String("/rAm") + String(freeRam()));
  delay(25);
  if (Serial.available())
  {
    String re = "";
    while (Serial.available())
    {
      re += (char)Serial.read();
    }
    if (re == "/r")
    {
      int len = EEPROM.length();
      String toSend = String("/rom");
      int used = 0;
      for (int i = 0; i < len; i ++)
      {
        byte b = EEPROM.read(i);
        if (b == 0)
          break;
          used += i;
      }
      toSend += String(used);
      toSend += String(":");
      toSend += String(len - used);
      Serial.println(toSend);
    }
  }
}
void loop() {
  SendData();
}