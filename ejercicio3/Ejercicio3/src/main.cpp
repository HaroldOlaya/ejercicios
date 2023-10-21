#include <Arduino.h>
#include <DataCapture.h>


void setup() {
  Serial.begin(9600);
  Serial.println();
  int contador = 0;
  int limite = DataCapture::captureInteger("Ingrese el limite:");
  for (int i = 0;i<=limite;i++){
    contador+=i;
  }
  
  Serial.println(contador);

}

void loop() {
  
}