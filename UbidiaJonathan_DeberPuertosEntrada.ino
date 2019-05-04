/* UNIVERSIDAD TÉCNICA DEL NORTE
 * SISTEMAS MICROPROCESADOS
 * UBIDIA JONATHAN
 * DEBER PUERTOS ENTRADA
 */
 
            // DECLARACIÓN DE VARIABLES 
int on1=0;
int cont1=0;
int on2=0;
int cont2=0;
int on3=0;
int cont3=0;

int dec1=22;
int uni1=23;
int a1=24;
int b1=25;
int c1=26;
int d1=27;
int bt1=28;

int dec2=32;
int uni2=33;
int a2=34;
int b2=35;
int c2=36;
int d2=37;
int bt2=38;

int dec3=42;
int uni3=43;
int a3=44;
int b3=45;
int c3=46;
int d3=47;
int bt3=48;

int decenas1;
int unidades1;
int decenas2;
int unidades2;
int decenas3;
int unidades3;

void setup() {       //VARIABLES DE ENTRADA Y SALIDA 
pinMode(bt1,INPUT);
pinMode(a1,OUTPUT);
pinMode(b1,OUTPUT);
pinMode(c1,OUTPUT);
pinMode(d1,OUTPUT);
pinMode(dec1,OUTPUT);
pinMode(uni1,OUTPUT);

pinMode(bt2,INPUT);
pinMode(a2,OUTPUT);
pinMode(b2,OUTPUT);
pinMode(c2,OUTPUT);
pinMode(d2,OUTPUT);
pinMode(dec2,OUTPUT);
pinMode(uni2,OUTPUT);

pinMode(bt3,INPUT);
pinMode(a3,OUTPUT);
pinMode(b3,OUTPUT);
pinMode(c3,OUTPUT);
pinMode(d3,OUTPUT);
pinMode(dec3,OUTPUT);
pinMode(uni3,OUTPUT);
}

void loop() {
                               //FUNCIONAMIENTO DEL PULSADOR1
  if(digitalRead(bt1)==HIGH){
  delay(300);
  on1=1-on1;
  if(cont1<25)
  cont1++;
  else
  cont1=0;
  }
  decenas1=cont1/10;
  unidades1=cont1-decenas1*10;
  digitalWrite(dec1,HIGH);
  digitalWrite(uni1,LOW);
  contador1(decenas1);
  delay(50);
  digitalWrite(dec1,LOW);
  digitalWrite(uni1,HIGH);
  contador1(unidades1);
  delay(50);
                               //FUNCIONAMIENTO DEL PULSADOR2
  if(digitalRead(bt2)==HIGH){
  delay(300);
  on2=1-on2;
  if(cont2<25)
  cont2++;
  else
  cont2=0;
  }
  decenas2=cont2/10;
  unidades2=cont2-decenas2*10;
  digitalWrite(dec2,HIGH);
  digitalWrite(uni2,LOW);
  contador2(decenas2);
  delay(50);
  digitalWrite(dec2,LOW);
  digitalWrite(uni2,HIGH);
  contador2(unidades2);
  delay(50); 
                                //FUNCIONAMIENTO DEL PULSADOR3

  if(digitalRead(bt3)==HIGH){
  delay(300);
  on3=1-on3;
  cont3=cont2+cont1;
  }  
  decenas3=cont3/10;
  unidades3=cont3-decenas3*10;
  digitalWrite(dec3,HIGH);
  digitalWrite(uni3,LOW);
  contador3(decenas3);
  delay(50);
  digitalWrite(dec3,LOW);
  digitalWrite(uni3,HIGH);
  contador3(unidades3);
  delay(50); 
}

void contador1(int dato){   //CONTADOR DEL PRIMER PULSADOR 
  switch(dato){
    case 0:
  digitalWrite(a1,LOW);
  digitalWrite(b1,LOW);
  digitalWrite(c1,LOW);
  digitalWrite(d1,LOW);
  break;
    case 1:
  digitalWrite(a1,HIGH);
  digitalWrite(b1,LOW);
  digitalWrite(c1,LOW);
  digitalWrite(d1,LOW);
  break;
    case 2:
  digitalWrite(a1,LOW);
  digitalWrite(b1,HIGH);
  digitalWrite(c1,LOW);
  digitalWrite(d1,LOW);
  break;
    case 3:
  digitalWrite(a1,HIGH);
  digitalWrite(b1,HIGH);
  digitalWrite(c1,LOW);
  digitalWrite(d1,LOW);
  break;
    case 4:
  digitalWrite(a1,LOW);
  digitalWrite(b1,LOW);
  digitalWrite(c1,HIGH);
  digitalWrite(d1,LOW);
  break;
    case 5:
  digitalWrite(a1,HIGH);
  digitalWrite(b1,LOW);
  digitalWrite(c1,HIGH);
  digitalWrite(d1,LOW);
  break;
    case 6:
  digitalWrite(a1,LOW);
  digitalWrite(b1,HIGH);
  digitalWrite(c1,HIGH);
  digitalWrite(d1,LOW);
  break;
    case 7:
  digitalWrite(a1,HIGH);
  digitalWrite(b1,HIGH);
  digitalWrite(c1,HIGH);
  digitalWrite(d1,LOW);
  break;
    case 8:
  digitalWrite(a1,LOW);
  digitalWrite(b1,LOW);
  digitalWrite(c1,LOW);
  digitalWrite(d1,HIGH);
  break;
    case 9:
  digitalWrite(a1,HIGH);
  digitalWrite(b1,LOW);
  digitalWrite(c1,LOW);
  digitalWrite(d1,HIGH);
  break;   
  }
}

void contador2(int dato){   //CONTADOR DEL SEGUNDO PULSADOR 
  switch(dato){
  case 0:
  digitalWrite(a2,LOW);
  digitalWrite(b2,LOW);
  digitalWrite(c2,LOW);
  digitalWrite(d2,LOW);
  break;
    case 1:
  digitalWrite(a2,HIGH);
  digitalWrite(b2,LOW);
  digitalWrite(c2,LOW);
  digitalWrite(d2,LOW);
  break;
    case 2:
  digitalWrite(a2,LOW);
  digitalWrite(b2,HIGH);
  digitalWrite(c2,LOW);
  digitalWrite(d2,LOW);
  break;
    case 3:
  digitalWrite(a2,HIGH);
  digitalWrite(b2,HIGH);
  digitalWrite(c2,LOW);
  digitalWrite(d2,LOW);
  break;
    case 4:
  digitalWrite(a2,LOW);
  digitalWrite(b2,LOW);
  digitalWrite(c2,HIGH);
  digitalWrite(d2,LOW);
  break;
    case 5:
  digitalWrite(a2,HIGH);
  digitalWrite(b2,LOW);
  digitalWrite(c2,HIGH);
  digitalWrite(d2,LOW);
  break;
    case 6:
  digitalWrite(a2,LOW);
  digitalWrite(b2,HIGH);
  digitalWrite(c2,HIGH);
  digitalWrite(d2,LOW);
  break;
    case 7:
  digitalWrite(a2,HIGH);
  digitalWrite(b2,HIGH);
  digitalWrite(c2,HIGH);
  digitalWrite(d2,LOW);
  break;
    case 8:
  digitalWrite(a2,LOW);
  digitalWrite(b2,LOW);
  digitalWrite(c2,LOW);
  digitalWrite(d2,HIGH);
  break;
    case 9:
  digitalWrite(a2,HIGH);
  digitalWrite(b2,LOW);
  digitalWrite(c2,LOW);
  digitalWrite(d2,HIGH);
  break;   
  }
}
void contador3(int dato){   //SUMA DE LOS DOS CONTADORES 
  switch(dato){
  case 0:
  digitalWrite(a3,LOW);
  digitalWrite(b3,LOW);
  digitalWrite(c3,LOW);
  digitalWrite(d3,LOW);
  break;
    case 1:
  digitalWrite(a3,HIGH);
  digitalWrite(b3,LOW);
  digitalWrite(c3,LOW);
  digitalWrite(d3,LOW);
  break;
    case 2:
  digitalWrite(a3,LOW);
  digitalWrite(b3,HIGH);
  digitalWrite(c3,LOW);
  digitalWrite(d3,LOW);
  break;
    case 3:
  digitalWrite(a3,HIGH);
  digitalWrite(b3,HIGH);
  digitalWrite(c3,LOW);
  digitalWrite(d3,LOW);
  break;
    case 4:
  digitalWrite(a3,LOW);
  digitalWrite(b3,LOW);
  digitalWrite(c3,HIGH);
  digitalWrite(d3,LOW);
  break;
    case 5:
  digitalWrite(a3,HIGH);
  digitalWrite(b3,LOW);
  digitalWrite(c3,HIGH);
  digitalWrite(d3,LOW);
  break;
    case 6:
  digitalWrite(a3,LOW);
  digitalWrite(b3,HIGH);
  digitalWrite(c3,HIGH);
  digitalWrite(d3,LOW);
  break;
    case 7:
  digitalWrite(a3,HIGH);
  digitalWrite(b3,HIGH);
  digitalWrite(c3,HIGH);
  digitalWrite(d3,LOW);
  break;
    case 8:
  digitalWrite(a3,LOW);
  digitalWrite(b3,LOW);
  digitalWrite(c3,LOW);
  digitalWrite(d3,HIGH);
  break;
    case 9:
  digitalWrite(a3,HIGH);
  digitalWrite(b3,LOW);
  digitalWrite(c3,LOW);
  digitalWrite(d3,HIGH);
  break;  
  }
}
