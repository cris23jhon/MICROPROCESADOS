/*
 * UNIVERSIDAD TECNICA DEL NORTE
 * FICA/CIERCOM
 * SISTEMAS MICROPROCESADOS
 * UBIDIA JONATHAN
 * SISTEMA VERIFICADOR DE CLAVE MEDIANTE KEYPAD Y LCD 
 */
#include <Keypad.h>    
#include <LiquidCrystal.h>

const byte FILAS = 4;     
const byte COLUMNAS = 4;    
char keys[FILAS][COLUMNAS] = {    
  {'1','2','3','C'},
  {'4','5','6','B'},
  {'7','8','9','A'},
  {'*','0','#','D'}
};
byte pinesFilas[FILAS] = {7,8,9,6};   
byte pinesColumnas[COLUMNAS] = {5,4,3,2}; 
char TECLA;       
char CLAVE[4];       
char CLAVE_M[] = "1234";   
int cont=0;
Keypad teclado = Keypad(makeKeymap(keys), pinesFilas, pinesColumnas, FILAS, COLUMNAS);  
LiquidCrystal lcd (22,23,24,25,26,27);

void setup(){
 lcd.begin(16,2);
}

void loop(){
   
  char TECLA = teclado.getKey(); 
    
  if (TECLA!=NO_KEY){
         
    CLAVE[cont]=TECLA;
        
    for (int i=0;i<4;i++){
    lcd.setCursor(i,0);
    lcd.print(CLAVE[i]);
    delay(10);}
    
    cont = cont + 1;
   
  if(cont == 4){  
        
    if (CLAVE[0] == CLAVE_M[0] && CLAVE[1] == CLAVE_M[1] && CLAVE[2] == CLAVE_M[2] && CLAVE[3] == CLAVE_M[3]) {
        lcd.clear();
        lcd.setCursor ( 0, 1 );
        lcd.print("PASS CORRECTO");
        delay(300);
        lcd.clear();}
      
    else if (CLAVE != CLAVE_M) {
        lcd.clear();
        lcd.setCursor ( 0, 1 );
        lcd.print("PASS INCORRECTO");
        delay(300);
        lcd.clear();} 
    cont = 0;
  } 
 }   
}
