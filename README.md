# A Memory(RAM)/Speed/EEPROM Debugger for Arduino.
-=SORRY=- for my english -- I speak portuguese.

How to use:<br>
1 - Open Arduino IDE<br>
2 - import EEPROM library using this code: <code><font color="red">#include</font><<font color="orange">EEPROM.h</font>></code><br>
3 - Copy and paste this <a href="https://github.com/Isaquedeveloper/arduino_debugger/raw/master/code.c" target="_blank">code</a> on Arduino IDE. You can follow an example code <a href="https://github.com/Isaquedeveloper/arduino_debugger/raw/master/example.c" target="_blank">here</a><br>
4 - At end of <code>void loop()</code>, write this: <code>SendData();</code><br>
 *ATTENTION:* Call <code>SendData()</code> on <b>every</b> loop (eg: <code>while</code>), <b>not</b> including SUB-LOOPS (eg: a while in other while).<br>
 5 - Download <a href="https://github.com/Isaquedeveloper/arduino_debugger/raw/master/ArduinoDebugger.exe">ArduinoDebugger</a> and run it<br>
 6 - With ArduinoDebugger opened, select serial port that arduino is connected, and click "Start".<br>
 7 - Now, you can see Ram Memory, Arduino(Processor) Speed. To see EEPROM, click "+" (on the window top) and click ↻ (Refresh).<br>
