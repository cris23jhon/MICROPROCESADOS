/*
   UNIVERSIDAD TECNICA DEL NORTE
   SISTEMAS MICROPROCESADOS
   UBIDIA JONATHAN
   CONTADOR BINARIO DE 6 BITS CON PULSADOR
*/

int i;
int j;
int num = 0; 

void setup() {
  pinMode(7, INPUT);
  for (i = 8; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  if (digitalRead(7) == HIGH) {
    num++;
    if (num > 64) {
      num = 0;
    }
    while (digitalRead(7) == HIGH) {
    }
  }
  j = num;
  for (i = 8; i <= 13; i++) {
    digitalWrite(i, j % 2);
    j = j / 2;
  }
}
