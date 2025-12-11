#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // I2C LCD module

int irPin = A0;
int greenLED = 8;
int redLED = 9;
int buzzer = 10;

int thresholdValue = 810;  // Pure <= 810, Impure > 810

void setup() {
  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print(" Petrol Purity ");
  delay(1500);
  lcd.clear();

  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(irPin);

  // Display sensor reading
  lcd.setCursor(0, 0);
  lcd.print("IR Value: ");
  lcd.print(sensorValue);
  lcd.print("   ");

  if (sensorValue > thresholdValue) {
    // IMPURE PETROL
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);
    digitalWrite(buzzer, HIGH);

    lcd.setCursor(0, 1);
    lcd.print("IMPURE PETROL   ");
  } 
  else {
    // PURE PETROL
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, HIGH);
    digitalWrite(buzzer, LOW);

    lcd.setCursor(0, 1);
    lcd.print("PURE PETROL     ");
  }

  delay(300);
}

