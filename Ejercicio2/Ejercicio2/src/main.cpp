#include <Arduino.h>
#include <DataCapture.h>


void setup() {
  Serial.begin(9600);
  Serial.println();

  String caracter = DataCapture::captureString("Ingrese un caracter:");
  Serial.println("Caracter: " + caracter);
  if (caracter == "a" || caracter == "e"|| caracter == "i"|| caracter == "o"|| caracter == "u"){
    Serial.println("el caracter es una vocal minuscula");
  }
  else{
    Serial.println("El caracter no es una vocal minuscula");
  }
}



void loop() {
  
}