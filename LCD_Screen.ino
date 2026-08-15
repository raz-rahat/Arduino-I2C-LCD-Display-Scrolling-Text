#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); 

void setup() {
  lcd.init();          
  lcd.backlight();     

  lcd.setCursor(0, 0);
  lcd.print("Name: Rahim");
  delay(3000);
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Class: 9");
  lcd.setCursor(0, 1);
  lcd.print("Roll: 10");
  delay(3000);
  lcd.clear();

  lcd.setCursor(16, 0); 
  lcd.print("Bangabashi School");
  
  for(int i = 0; i < 33; i++){
    lcd.scrollDisplayLeft();
    delay(250);
  }
  
  lcd.clear();
}

void loop() {
  
}