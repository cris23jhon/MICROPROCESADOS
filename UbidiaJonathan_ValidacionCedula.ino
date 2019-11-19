/*
   UNIVERSIDAD TÉCNICA DEL NORTE
   FICA-CIERCOM
   SISTEMAS MICROPROCESADOS
   Nombre: JONATHAN UBIDIA
   Realizar un programa que permita validar el número de cédula con el guión. El dato se lo ingresa por comunicación serial
*/

#include<stdlib.h>

int validador[] = {2, 1, 2, 1, 2, 1, 2, 1, 2};
char numero1 ;
char numero2 ;
char numero3 ;
char numero10 ;
int i = 0;
int valor;
int total = 0;
int total2 = 0;
int n1 ;
int n2 ;
int n3;
int n10 ;

///////////////////////////////////////////////////////////////
void setup() {
  Serial.begin(9600);
  Serial.println("Ingrese la cedula");
}

void loop() {
  if (Serial.available() > 0) {
    String cedula = Serial.readString();
    Serial.println(cedula);
    validadorCedula(cedula);
  }
}
///////////////////////////////////////////////////////////////
void validadorCedula(String cedula2) {

  numero1 = cedula2.charAt(0);
  numero2 = cedula2.charAt(1);
  numero3 = cedula2.charAt(2);
  numero10 = cedula2.charAt(10);

  n1 = numero1 - 48;
  n2 = numero2 - 48;
  n3 = numero3 - 48;
  n10 = numero10 - 48;

  if (cedula2.length() == 11) {
    if (n1 >= 0 || n1 <= 2 && n2 >= 0 || n2 <= 4 && n3 >= 0 || n3 <= 5 ) {
      for (i = 0; i < 10; i++) {
        valor = validador[i] * (((cedula2.charAt(i) - 48)));
        if (valor >= 10) {
          valor = valor - 9;
        }
        total = total + valor;
        total2 = 10 - (total % 10);
        if (total2 == 10) {
          total2 = 0;
        }
      }
      if (total2 == n10) {
        Serial.println("");
        Serial.println("Cedula correcta");
        delay(200);
      } else {
        Serial.println("");
        Serial.println("Cedula Incorrecta");
        delay(200);
      }
    }
    else {
      Serial.println("Cedula Incorrecta");
    }

  }
  else if (cedula2.length() < 11) {
    Serial.println("");
    Serial.println("la cedula tiene menos de 11 digitos");
    delay(200);
  }
  else if (cedula2.length() > 11) {
    Serial.println("");
    Serial.println("la cedula tiene mas de 11 digitos");
    delay(200);
  }
}
