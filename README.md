# A Memory(RAM)/CPU(Speed)/EEPROM Debugger for Arduino.
How to use:
1 - Code your arduino to send data:

<code>
int freeRam () <br>
{ <br>
extern int __heap_start, *__brkval; <br>
int v; <br>
return (int) &v - (__brkval == 0 ? (int) &__heap_start : (int) __brkval); <br>
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
</code>
