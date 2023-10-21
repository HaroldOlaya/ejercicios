#include <Arduino.h>
#include <DataCapture.h>

void setup() {
  Serial.begin(9600);
  Serial.println();
  int limite = 5;
  int arreglo[limite] = {};
  int iterar = limite-1;
  for (int i = 0; i <= iterar; i++) {
    arreglo[i] = DataCapture::captureInteger("Ingrese un numero: ");
  }

  int mayor = arreglo[0]; 

  for (int i = 1; i <= limite; i++) { 
    if (arreglo[i] > mayor) {
      mayor = arreglo[i]; 
    }
  }

  Serial.println("El número mayor en la lista es: " + String(mayor));
}

void loop() {
 
}

