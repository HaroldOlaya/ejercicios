#include <Arduino.h>
#include <DataCapture.h>

void setup() {
  Serial.begin(9600);
  Serial.println();
  // este es el problema a/b+1
  float a = DataCapture::captureFloat("Ingrese primer número:");
  float b = DataCapture::captureFloat("Ingrese segundo número:");


  Serial.println("Resultado de la operacion: " + String((a/b)+1));

 // String message = DataCapture::captureString("Ingrese una palabra:");
 // Serial.println("Mensaje: " + message);
}

void loop() {
  
}
