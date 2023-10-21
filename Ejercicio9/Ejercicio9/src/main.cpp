#include <Arduino.h>
#include <DataCapture.h>

struct Complejo {
  float real, imaginario;
} z1, z2;

void pedirDatos();
Complejo suma(Complejo, Complejo);

void setup() {
  Serial.begin(9600);
  Serial.println();
  pedirDatos();
  Complejo x = suma(z1, z2);
  Serial.print("Real: ");
  Serial.print(x.real);
  Serial.print(", Imaginario: ");
  Serial.println(x.imaginario);

}

void loop() {
  // Tu código para el loop si es necesario
}

void pedirDatos() {
  z1.real = DataCapture::captureFloat("Digite el numero real de z1: ");
  z1.imaginario = DataCapture::captureFloat("Digite el numero imaginario de z1: ");

  z2.real = DataCapture::captureFloat("Digite el numero real de z2: ");
  z2.imaginario = DataCapture::captureFloat("Digite el numero imaginario de z2: ");
}

Complejo suma(Complejo z1, Complejo z2) {
  z1.real += z2.real;
  z1.imaginario += z2.imaginario;

  return z1;
}
