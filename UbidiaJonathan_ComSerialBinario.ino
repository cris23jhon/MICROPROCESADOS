/*
 * UNIVERSIDAD TECNICA DEL NORTE 
 * SISTEMAS MICROPROCESADOS
 * UBIDIA JONATHAN
 * EJERCICIO DE REPASO
 * Realizar un programa que el número ingresado por comunicación serial se refleje en código binario hasta 8 bits con leds. 
 * Ejemplo: número ingresado 5 -> sistema con leds 00000101
 */

int leds[] = {2, 3, 4, 5, 6};
float num;
int num2;

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 5; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(leds[i], LOW);
  }
  Serial.println("Ingrese el numero");
  while (Serial.available() == 0) {}
  num = Serial.parseFloat();

  if (int(num) == num) {
    if (num >= 0 && num <= 31) {
      num2 = int(num);
      for (int i = 0; i < 5; i++) {
        if (num2 % 2 == 1) {
          digitalWrite(leds[i], HIGH);
        }
        else {
          digitalWrite(leds[i], LOW);
        }
        num2 = num2 / 2;
      }
    }
    else {
      Serial.println("El numero ingresado no es valido");
    }
  }
  else {
    Serial.println("Error");
  }
  delay(3000);
}
