/*
 * UNIVERSIDAD TECNICA DEL NORTE
 * SISTEMAS MICROPROCESADOS
 * JONATHAN UBIDIA
 * PROGRAMA PARA VALIDAR EL NUMERO DE CEDULA ECUATORIANO 
 * EL FORMATO DE INGRESO DEBE SER DE ESTE MODO(100385875-8)
 */
 
  #include<stdlib.h>

  int n1,n2,n3,n10,valor;
  int total = 0;
  int i=0;
  int total2 = 0;
  int vector[] = {2, 1, 2, 1, 2, 1, 2, 1, 2};
  char num1 ;
  char num2 ;
  char num3 ;
  char num10 ;

void setup() { 
  Serial.begin(9600);
  Serial.println("Bienvenido al sistema de verificacion de C.I"); 
  Serial.println("Ingrese el numero de cedula con el guion"); 
}
void loop() {
  if (Serial.available() > 0) {
    String cedula = Serial.readString();
    validadorCedula(cedula);
  }
}

void validadorCedula(String cedula2) {
  Serial.println(cedula2); 
  num1 = cedula2.charAt(0);
  num2 = cedula2.charAt(1);
  num3 = cedula2.charAt(2);
  num10 = cedula2.charAt(10);
  n1 = num1 - 48;
  n2 = num2 - 48;
  n3 = num3 - 48;
  n10 = num10 - 48;
  total2 = 0;
  if (cedula2.length() == 11) {
    if (n1 >= 1 || n1 <= 2 && n2 >= 0 || n2 <= 4) {
      if (n3<6) {
        for (; i < 9; i++) {
          valor = vector[i] * (((cedula2.charAt(i) - 48)));
           if (valor >= 10) {
            valor = valor - 9;}
            total = total + valor;
            total2 = 10 - (total % 10);
            if (total2 == 10) {
             total2 = 0;}
        }
        if (total2 == n10) {
          Serial.println("");
          Serial.println("Numero de cedula correcto");
          Serial.println("Ingrese el numero de cedula con el guion");
          delay(100);
        } else {
          Serial.println("");
          Serial.println("Numero de cedula incorrecto");
          Serial.println("Ingrese el numero de cedula con el guion");
          delay(100);}        
    }
   }
  }
  else if (cedula2.length() <=10) {
    Serial.println("");
    Serial.println("Error: El numero de cedula ingresado tiene menos de 11 caracteres");
    Serial.println("Ingrese nuevamente el numero de cedula con el guion");
    delay(100);}
  else if (cedula2.length() > 11) {
    Serial.println("");    
    Serial.println("Error: El numero de cedula ingresado tiene mas de 11 caracteres");
    Serial.println("Ingrese nuevamente el numero de cedula con el guion");
    delay(100);}
}  
