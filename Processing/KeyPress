
/* Use this to read key strokes on your Arduino
 * Author: Antony Nguyen
 */

import processing.serial.*;

Serial myPort;

void setup()
{
  String portName = Serial.list()[0];
  myPort = new Serial(this, portName, 9600);
}

void draw() {
}

void keyPressed() {
  myPort.write(key);
}
