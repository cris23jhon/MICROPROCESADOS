/*
 * UNIVERSIDAD TECNICA DEL NORTE
 * SISTEMAS MICROPROCESADOS
 * JONATHAN UBIDIA
 * PROGRAMA PARA VALIDAR PLACAS DE VEHICULOS ECUATORIANOS 
 * EL FORMATO SE DEBE INGRESAR DE ESTE MODO(ABC-0123)
 */
 
  #include<stdlib.h>
  String placa;
  char placa2[8];
  
void setup() { 
  Serial.begin(9600);
  Serial.println("Bienvenido al sistema de verificacion de placas"); 
  Serial.println("Ingrese la placa con el guion"); 
}

void loop() {
    if (Serial.available() > 0) {
    placa = Serial.readString();
    if (placa.length()==7){
      placa=placa.substring(0,4)+"0"+placa.substring(5,8);
    for(int i=0;i<placa.length();i++){
      placa2[i]=placa.charAt(i);  
    }
        validadorPlaca(placa);
   }
  }
}

void validadorPlaca(String placa2) {
 
  if(placa2[0]=='A'){
  Serial.println(placa); 
  Serial.println("PLACA DE AZUAY"); 
  delay(100);
 }
  else if(placa2[0]=='B'){
  Serial.println(placa); 
  Serial.println("PLACA DE BOLIVAR");  
  delay(100);
  }
    else if(placa2[0]=='U'){
  Serial.println(placa); 
  Serial.println("PLACA DE CAÑAR");  
  delay(100);
  }
    else if(placa2[0]=='C'){
  Serial.println(placa); 
  Serial.println("PLACA DE CARCHI");
  delay(100);  
  }
    else if(placa2[0]=='H'){
  Serial.println(placa); 
  Serial.println("PLACA DE CHIMBORAZO"); 
  delay(100); 
  }
    else if(placa2[0]=='X'){
  Serial.println(placa); 
  Serial.println("PLACA DE COTOPAXI");
  delay(100);  
  }
    else if(placa2[0]=='O'){
  Serial.println(placa); 
  Serial.println("PLACA DE EL ORO"); 
  delay(100); 
  }
    else if(placa2[0]=='E'){
  Serial.println(placa); 
  Serial.println("PLACA DE ESMERALDAS"); 
  delay(100); 
  }
    else if(placa2[0]=='W'){
  Serial.println(placa); 
  Serial.println("PLACA DE GALAPAGOS");
  delay(100);  
  }
    else if(placa2[0]=='G'){
  Serial.println(placa); 
  Serial.println("PLACA DE GUAYAS");
  delay(100);  
  }
    else if(placa2[0]=='I'){
  Serial.println(placa); 
  Serial.println("PLACA DE IMBABURA");
  delay(100);  
  }
    else if(placa2[0]=='L'){
  Serial.println(placa); 
  Serial.println("PLACA DE LOJA");
  delay(100);  
  }
    else if(placa2[0]=='R'){
  Serial.println(placa); 
  Serial.println("PLACA DE LOS RIOS"); 
  delay(100); 
  }
    else if(placa2[0]=='M'){
  Serial.println(placa); 
  Serial.println("PLACA DE MANABI");  
  delay(100);
  }
    else if(placa2[0]=='V'){
  Serial.println(placa); 
  Serial.println("PLACA DE MORONA SANTIAGO");
  delay(100);  
  }
    else if(placa2[0]=='N'){
  Serial.println(placa); 
  Serial.println("PLACA DE NAPO");
  delay(100);  
  }
    else if(placa2[0]=='Q'){
  Serial.println(placa); 
  Serial.println("PLACA DE ORELLANA");  
  delay(100);
  }
    else if(placa2[0]=='S'){
  Serial.println(placa); 
  Serial.println("PLACA DE PASTAZA");  
  delay(100);
  }
    else if(placa2[0]=='P'){
  Serial.println(placa); 
  Serial.println("PLACA DE PICHINCHA");
  delay(100);  
  }
    else if(placa2[0]=='Y'){
  Serial.println(placa); 
  Serial.println("PLACA DE SANTA ELENA"); 
  delay(100); 
  }
    else if(placa2[0]=='J'){
  Serial.println(placa); 
  Serial.println("PLACA DE SANTO DOMINGO"); 
  delay(100); 
  }
    else if(placa2[0]=='K'){
  Serial.println(placa); 
  Serial.println("PLACA DE SUCUMBIOS");  
  delay(100);
  }
    else if(placa2[0]=='T'){
  Serial.println(placa); 
  Serial.println("PLACA DE TUNGURAHUA");
  delay(100);  
  }
    else if (placa2[0]=='Z'){
  Serial.println(placa); 
  Serial.println("PLACA DE ZAMORA CHINCHIPE"); 
  delay(100); 
  }
}  
