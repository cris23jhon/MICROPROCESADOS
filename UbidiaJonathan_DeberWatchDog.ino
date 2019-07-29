/*                                  UNIVERSIDAD TECNICA DEL NORTE
                                           FICA-CIERCOM
                                       SISTEMAS MICROPROCESADOS
UBIDIA JONATHAN

Realizar un programa que reinicie el sistema al tener la hora 00:10:50. 
Cuando vuelva a funcionar, deberá empezar con la hora 00:11:10. 
Es proceso se observa en una LCD. No habrá extensión de plazo.

*/
#include <LiquidCrystal.h>
#include <TimerOne.h>
#include<EEPROM.h>
#include <MsTimer2.h>
#include<avr/wdt.h>

LiquidCrystal lcd(9, 8, 7, 6, 5, 4);
int segundero = 0;
int minutero = 0;
int horero = 0;
int segR = 50;
int minR = 10;
int horaR = 0;
int segE = 10;
int minE = 11;
int horaE = 0;

void setup() {

  lcd.begin(16, 2);
  Timer1.initialize(1000000);
  MsTimer2::set(1000, reloj2);
  segundero =  EEPROM.read(0);
  minutero = EEPROM.read(1);
  horero = EEPROM.read(2);
  segR = EEPROM.read(3);
  minR = EEPROM.read(4);
  horaR = EEPROM.read(5);
}
void loop() {

}

void reloj() {
  if (segundero < 60) {
    segundero++;
    lcd.setCursor(0, 0);
    lcd.print(horero);
    lcd.print(":");
    lcd.setCursor(3, 0);
    lcd.print(minutero);
    lcd.print(":");
    lcd.setCursor(6, 0);
    lcd.print(segundero);
  }
  else {
    segundero = 0;
    if (minutero < 60) {
      minutero++;
      lcd.setCursor(0, 0);
      lcd.print(horero);
      lcd.print(":");
      lcd.setCursor(3, 0);
      lcd.print(minutero);
      lcd.print(":");
      lcd.setCursor(6, 0);
      lcd.print(segundero);
    }
    else {
      minutero = 0;

      if (horero < 12) {
        horero++;
        lcd.setCursor(0, 0);
        lcd.print(horero);
        lcd.print(":");
        lcd.setCursor(3, 0);
        lcd.print(minutero);
        lcd.print(":");
        lcd.setCursor(6, 0);
        lcd.print(segundero);
      }
      else {
        horero = 0;

      }
    }
  }
}
void reloj2() {

  if (segE == 10) {
    segE++;
    lcd.setCursor(0, 0);
    lcd.print(horaE);
    lcd.print(":");
    lcd.setCursor(3, 0);
    lcd.print(minE);
    lcd.print(":");
    lcd.setCursor(6, 0);
    lcd.print(segE);
  }
  else {
    segE = 0;
    if (minE == 11) {
      minE++;
      lcd.setCursor(0, 0);
      lcd.print(horaE);
      lcd.print(":");
      lcd.setCursor(3, 0);
      lcd.print(minE);
      lcd.print(":");
      lcd.setCursor(6, 0);
      lcd.print(segE);
    }
    else {
      minE = 0;

      if (horaE < 12) {
        horaE++;
        lcd.setCursor(0, 0);
        lcd.print(horaE);
        lcd.print(":");
        lcd.setCursor(3, 0);
        lcd.print(minE);
        lcd.print(":");
        lcd.setCursor(6, 0);
        lcd.print(segE);
      }
      else {
        horaE = 0;

      }
    }
  }
  reinicio();
}

void reinicio() {

  if (segundero == segR && minutero == minR && horero == horaR ) {
    if (segE == segR && minE == minR && horaE == horaR ) {
      wdt_enable(WDTO_15MS);
      delay(500);
      reloj();
    }
    wdt_enable(WDTO_15MS);
    delay(500);
    reloj2();
  }
}
