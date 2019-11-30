/*
 * UNIVERSIDAD TECNICA DEL NORTE
 * SISTEMAS MICROPROCESADOS
 * UBIDIA JONATHAN
 * EJERCICIO DE REPASO
 * Realizar un programa que por comunicación serial se ingrese el límite de lectura del conversor análogo digital (0-1024) 
 * si el valor del conversor supera dicho valor, se enciende un led.
 */

int dato;
int led = 8;

void setup() {
  Serial.begin(9600);
  dato = analogRead(0);
  pinMode(led,OUTPUT);
}

void loop() {

  dato = (analogRead(0) * 1050.0) / 1023;

  Serial.println(dato);
  delay(500);

  if (dato > 1023) {
    digitalWrite(8, HIGH);
  }
  else {
    digitalWrite(8, LOW);
  }
}
