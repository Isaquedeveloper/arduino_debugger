# A Memory(RAM)/CPU(Speed)/EEPROM Debugger for Arduino.
How to use:<br>
1 - Open Arduino IDE<br>
2 - import EEPROM library using this code: <code><font color="red">#include</font><<font color="orange">EEPROM.h</font>></code><br>
3 - Copy and paste this <a href="https://github.com/Isaquedeveloper/arduino_debugger/raw/master/code.c" target="_blank">code</a> on Arduino IDE<br>
4 - At end of <code>void loop()</code>, write this: <code>SendData();</code><br>
 *ATTENTION:* Call <code>SendData()</code> on <b>every</b> loop (eg: <code>while</code>), <b>not</b> including SUB-LOOPS (eg: a while in other while).
