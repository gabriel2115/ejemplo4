// Ejemplo 4 lectura serial
// 2022 04 04
// Gabriel López

int entrada;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  if (Serial.available() > 0) {

    entrada = Serial.read();

    Serial.println(entrada);

  }

}
