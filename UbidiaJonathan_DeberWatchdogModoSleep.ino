/*
 * UNIVERSIDAD TECNICA DEL NORTE
 * SISTEMAS MICROPROCESADOS
 * DEBER WATCHDOG Y MODO SLEEP
 * UBIDIA JONATHAN
 */

#include <MsTimer2.h>
#include<avr/wdt.h>

float dato;
int i = 0;
int cont = 0;

void setup() {
  MsTimer2::set(1000, conteo);
  MsTimer2::start();
  Serial.begin(9600);
  Serial.println("SISTEMA ENCENDIDO");
  dato = (analogRead(0) * 5) / 1023;
  if (i == 0) {
    wdt_disable();
    Serial.println("OFF");
  } else {
    wdt_enable(WDTO_4S);
    Serial.println("ON");
  }
}

void loop() {

  Serial.println(cont++);
  delay(200);
}

void conteo() {
  if (i == 5) {
    wdt_enable(WDTO_4S);
    Serial.println("Activado");
  }
}
