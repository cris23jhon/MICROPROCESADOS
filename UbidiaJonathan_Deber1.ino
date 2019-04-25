
/*UNIVERSIDAD TÉCNICA DEL NORTE
 * SISTEMAS MICROPROCESADOS 
 * JONATHAN UBIDIA 
 * DEBER N.1
*/

//Primero se declaran todas las variables a usar en cada uno de los programas 
int par[4]={0,2,4,6};//vector para leds pares
int impar[4]={1,3,5,7};// vector para leds impares
int leds[8]={0,1,2,3,4,5,6,7};//vector para prender todos los leds
int timer = 200;//tiempo del delay
int i=0;//variable que reinicia el programa 

void setup() {

  for (;i<4;i++){
  pinMode(par[i],OUTPUT);
  }
  i=0;
  
  for (;i<8;i++){
  pinMode(leds[i],OUTPUT);
  }
  i=0;
 
  for (;i<4;i++){
  pinMode(par[i],OUTPUT);
  }
  i=0;
  for (;i<4;i++){
  pinMode(impar[i],OUTPUT);
  }
 i=0; 
}

void loop() {

     //Ejercicio 1: En este ejercicio se encenderán solo los leds en las posiciones pares
  for(;i<4;i++){
  digitalWrite(par[i],HIGH);
  delay(timer);
  digitalWrite(par[i],LOW);  
  delay(timer);
  }
   i=0;
  
      //Ejercicio 2: En este ejercicio se encenderán solo los leds en las posiciones impares
  for(;i<4;i++){
  digitalWrite(impar[i],HIGH);
  delay(timer);
  digitalWrite(impar[i],LOW);  
  delay(timer);
  }
  i=0;

     //Ejercicio 3: En este ejercicio los leds se encenderán desde el primero hasta el último y de regreso
  for(;i<8;i++){
  digitalWrite(leds[i],HIGH);
  delay(timer);
  digitalWrite(leds[i],LOW);  
  delay(timer);
  }
  for(int i=8-1;i>=0;i--){
  digitalWrite(leds[i],HIGH);
  delay(timer);
  digitalWrite(leds[i],LOW);  
  delay(timer);
  }  
  i=0;
 
     //Ejercicio 4: En este ejercicio los leds se encenderán y permaneceran asi hasta que se enciendan todos y empezaran a apagarse uno por uno.
  for(;i<8;i++){
  digitalWrite(leds[i],HIGH);
  delay(timer);
  }
  i=0;
  for(;i<8;i++){
  digitalWrite(leds[i],LOW);  
  delay(timer);
  }
  i=0; 

     //Ejercicio 5: Este ejercicio combina los dos primeros ejercicios en uno solo
  for(;i<4;i++){
  digitalWrite(par[i],HIGH);
  delay(timer);
  digitalWrite(par[i],LOW);  
  delay(timer);
  }
  i=0;
  for(;i<4;i++){
  digitalWrite(impar[i],HIGH);
  delay(timer);
  digitalWrite(impar[i],LOW);  
  delay(timer);
  }
  i=0;
}
