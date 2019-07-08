
int sensor = 7;
int dormitorio = 8;
int sala = 9;
int cocina = 10;
int patio = 11;
int comedor = 12;
String clave;

void setup() {
  Serial.begin(9600);
  attachInterrupt(0, loop, LOW);
  pinMode(dormitorio, OUTPUT);
  pinMode(sala, OUTPUT);
  pinMode(cocina, OUTPUT);
  pinMode(patio, OUTPUT);
  pinMode(comedor, OUTPUT);
  digitalWrite(dormitorio, LOW);
  digitalWrite(sala, LOW);
  digitalWrite(cocina, LOW);
  digitalWrite(patio, LOW);
  digitalWrite(comedor, LOW);
}

void loop() {
  if (Serial.available() > 0) {
    clave = Serial.readString();
    clave.toUpperCase();
    if (clave == "1234") {
      Serial.println("");
      Serial.println("contraseña correcta");
      int rnd = random(8, 12);
      digitalWrite(rnd, HIGH);
      delay(1000);
      digitalWrite(rnd, LOW);
      delay(1000);
    }
    else {
      Serial.println("contraseña incorrecta");
    }
  }
}
