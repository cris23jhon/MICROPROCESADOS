
/*UNIVERSIDAD TÉCNICA DEL NORTE
   SISTEMAS MICROPROCESADOS
   JONATHAN UBIDIA
   EJERCICIO DE REPASO
   Realizar un programa que active 4 juegos de luces con 5 leds al ingresar datos por comunicación serial
   de la siguiente forma: ACBF-> Activa juego 1 ACGF -> Activa juego 2 ADBF -> Activa juego 3 ADBH -> Activa juego 4
*/

String dato;
int leds[] = {8, 9, 10, 11, 12};
int i = 0;

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 5; i++) {
    pinMode(leds[i], OUTPUT);
  }
  Serial.println("Bienvenido, ingrese los siguientes caracteres: ACBF, ACGF, ADBH");
}
void loop() {

  if (Serial.available() > 0) {
    dato = Serial.readString();
    Serial.println(dato);

    //Ejercicio 3: En este ejercicio los leds se encenderán desde el primero hasta el último y de regreso
    if (dato == "ACBF") {
      for (; i < 5; i++) {
        digitalWrite(leds[i], HIGH);
        delay(100);
        digitalWrite(leds[i], LOW);
        delay(100);
      }
      for (int i = 5 - 1; i >= 0; i--) {
        digitalWrite(leds[i], HIGH);
        delay(100);
        digitalWrite(leds[i], LOW);
        delay(100);
      }
      i = 0;
    }
    else {
      //Ejercicio 4: En este ejercicio los leds se encenderán y permaneceran asi hasta que se enciendan todos y empezaran a apagarse uno por uno.
      if (dato == "ACGF") {
        for (; i < 5; i++) {
          digitalWrite(leds[i], HIGH);
          delay(100);
        }
        i = 0;
        for (; i < 5; i++) {
          digitalWrite(leds[i], LOW);
          delay(100);
        }
        i = 0;
      }
      else {
        //Ejercicio 5: Este ejercicio combina los dos primeros ejercicios en uno solo
        if (dato == "ADBH") {

          for (; i < 5; i++) {
            digitalWrite(leds[i], HIGH);
            delay(100);
          }
          for (int i = 5 - 1; i >= 0; i--) {
            digitalWrite(leds[i], LOW);
            delay(100);
          }
          i = 0;
        }
        else {
          if (dato == "ADBF") {

            for (; i < 5; i++) {
              digitalWrite(leds[i], HIGH);
              delay(100);
              digitalWrite(leds[i], LOW);
              delay(100);
            }
            for (int i = 5 - 1; i >= 0; i--) {
              digitalWrite(leds[i], HIGH);
              delay(100);
              digitalWrite(leds[i], LOW);
              delay(100);
            }
            i = 0;
          }
        }
      }
    }
  }
}
