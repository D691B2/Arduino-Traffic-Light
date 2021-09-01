// Created By Derradj.i

/*

C++

  ------------LCD------------
  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

*/

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// vars of LED . red >> 6 , yellow >> 1 , green >> 0 !
int ledPin_red = 6 ,ledPin_yellow = 1 ,ledPin_green = 0;

void setup() {
  
  pinMode(ledPin_red, OUTPUT);  
  pinMode(ledPin_yellow, OUTPUT); 
  pinMode(ledPin_green, OUTPUT); 
  
}

void loop() {
  /* ----------------- LED : RED ----------------- */
  digitalWrite(ledPin_red, 1);  // sets the LED to the button's value
  lcd.print("STOP ...");   // //
  delay(4000);   // //
  lcd.clear();   // //
  digitalWrite(ledPin_red, 0);   // //
  delay(30);   // //

  /* ----------------- LED : YELLOW ----------------- */
  digitalWrite(ledPin_yellow, 1);  // sets the LED to the button's value
  lcd.print("WAIT ...");   // print (WAIT ...) in LCD
  delay(1000);   // waiting 0.8 second
  // clear the LCD screen :)
  lcd.clear();   // clear the LCD screen :)
  digitalWrite(ledPin_yellow, 0);   // stoped light yellow
  delay(30);   // waiting 0.01 second
  
  /* ----------------- LED : GREEN ----------------- */
  digitalWrite(ledPin_green,1);  // sets the LED to the button's value
  lcd.print("GO ...");   // //
  delay(4000);   // //
  lcd.clear();   // //
  digitalWrite(ledPin_green,0);   // //
  delay(30);   // //
  
}