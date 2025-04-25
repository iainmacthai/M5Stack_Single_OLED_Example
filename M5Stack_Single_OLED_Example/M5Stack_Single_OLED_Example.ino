/*  M5Stack_Single_OLED_Example.ino
* ESP32-CYD (ESP32 Dev Module)
* 
* 
* M5UnitOLED from M5GFX Library V0.2.6
* Arduino IDE 2.3.2
* Boards Manager - ESP32 by Espressif V3.1.0
* Iain MacMillan
* 26/04/2025
*/
#include <M5UnitOLED.h>
M5UnitOLED display(27, 22, 400000);

void setup() {
  Serial.begin(115200);
  display.init();
  display.setRotation(3); 
  display.setFont(&fonts::Font2);   // Pixel Height 16
  display.setTextSize(0); 
}

void OLED1print() {
  // OLED 1 Display
  display.startWrite();
  display.clear();
  display.setCursor(0, 0);
  display.print("I Am OLED 1");
  display.endWrite();
  delay(750); 
  display.startWrite();
  display.clear();
  display.setCursor(0, 0);
  display.print("I Can Display Text");
  display.endWrite();
  delay(750);  
}

void loop() {
	OLED1print();
	delay(10);
}