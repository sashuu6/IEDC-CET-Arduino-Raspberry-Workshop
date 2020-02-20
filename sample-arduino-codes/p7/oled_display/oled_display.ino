// Adafruit OLED display

#include <SPI.h>  // adafruit display driver header file
#include <Wire.h> // adafruit display driver header file
#include <Adafruit_GFX.h> // adafruit display driver header file
#include <Adafruit_SSD1306.h> // adafruit display model header file

#define OLED_RESET 4 //OLED
Adafruit_SSD1306 display(OLED_RESET); //OLED 

void setup() {
  // put your setup code here, to run once:
 display.begin(SSD1306_SWITCHCAPVCC, 0x3C); //OLED 
 display.display(); //initialize display
 delay(2000);
 display.clearDisplay(); //clear display
}

void loop() {
  // put your main code here, to run repeatedly:
 display.clearDisplay();
 display.display();
 display.setTextSize(2); // setting text size
 display.setTextColor(WHITE); // setting text color
 display.setCursor(0,0); // setting position for OLED display
 display.println("IOT LAB");
 display.println("CET");
 display.display();
}
