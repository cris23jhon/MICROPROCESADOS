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
