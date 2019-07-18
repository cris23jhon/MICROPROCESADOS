/*
 * UNIVERSIDAD TECNICA DEL NORTE 
 * FICA/CIERCOM/SISTEMAS MICROPROCESADOS
 * JONATHAN UBIDIA
 * DEBER MEMORIA EEPROM/ sistema reloj con alarma almacenada en la EEPROM
 */
#include <TimerOne.h>
#include <MsTimer2.h>
#include <EEPROM.h>

int segundero;
int minutero;
int horero;
int h, m, s;

void setup() {

  MsTimer2::set(200, reloj);
  MsTimer2::start();
  Timer1.initialize(200000);
  Timer1.attachInterrupt(alarma);
  Serial.begin(9600);
  segundero = EEPROM.read(0);
  minutero = EEPROM.read(1);
  horero = EEPROM.read(2);

}

void loop() {

}

void reloj() {
  if (segundero < 60) {
    segundero++;
    Serial.print(horero);
    Serial.print(":");
    Serial.print(minutero);
    Serial.print(":");
    Serial.println(segundero);

  }
  else {
    segundero = 0;
    if (minutero < 60) {
      minutero++;
      Serial.print(horero);
      Serial.print(":");
      Serial.print(minutero);
      Serial.print(":");
      Serial.println(segundero);
    }
    else {
      minutero = 0;

      if (horero < 12) {
        horero++;
        Serial.print(horero);
        Serial.print(":");
        Serial.print(minutero);
        Serial.print(":");
        Serial.println(segundero);
      }
      else {
        horero = 0;

      }
    }
  }
}
void alarma() {

  s == segundero;
  m == minutero;
  h == horero;
  if (s == 0 && m == 5 && h == 0) {
    Serial.println("alarma");
  }
}
