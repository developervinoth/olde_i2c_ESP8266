//NodemCU Conntections
// D1 ----> SCL
// D2 ----> SDA
// 3V ----> VCC
// GND ---->GND


#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display(-1);

void setup() 
{ 
// initialize with the I2C addr 0x3C
display.begin(SSD1306_SWITCHCAPVCC, 0x3C);

// Clear the buffer.
display.clearDisplay();

// Display Text
display.setTextSize(2);
display.setTextColor(WHITE);
display.setCursor(0,15);
display.println("Robu.in!");
display.display();
delay(1000);
display.clearDisplay();

// Display Inverted Text
display.setTextColor(BLACK, WHITE); // 'inverted' text
display.setCursor(0,15);
display.println("Robu.in!");
display.display();
delay(1000);
display.clearDisplay();

// Changing Font Size
display.setTextColor(WHITE);
display.setCursor(0,15);
display.setTextSize(2);
display.println("Hello!");
display.display();
delay(2000);
display.clearDisplay();

// Display Numbers
display.setTextSize(2);
display.setCursor(0,15);
display.println("SKU:62312");
display.display();
delay(2000);
display.clearDisplay();

// Display ASCII Characters
display.setCursor(0,0);
display.setTextSize(3);
display.write(3);
display.write(3);
display.write(3);
display.write(3);
display.write(3);
display.write(3);
display.write(3);
display.display();
delay(2000);
display.clearDisplay();

// Scroll full screen
display.setCursor(0,0);
display.setTextSize(1);
display.println("Made with");
display.println("Love");
display.println("by Apurva");
display.display();
display.startscrollright(0x00, 0x07);
delay(2000);
display.stopscroll();
delay(1000);
display.startscrollleft(0x00, 0x07);
delay(2000);
display.stopscroll();
delay(1000); 
display.startscrolldiagright(0x00, 0x07);
delay(2000);
display.startscrolldiagleft(0x00, 0x07);
delay(2000);
display.stopscroll();
display.clearDisplay();

// Scroll part of the screen
display.setCursor(0,0);
display.setTextSize(1);
display.println("Robu.in");
display.println("Follow on IG");
display.println("Subscribe on Youtube");
display.println("Like On Facebook");
display.display();
display.startscrollright(0x00, 0x00);
}

void loop() {}
