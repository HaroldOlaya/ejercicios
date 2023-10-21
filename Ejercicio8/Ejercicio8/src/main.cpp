#include <Arduino.h>
#include <DataCapture.h>

void calcular (int,int,int&,int&);

void setup() {
Serial.begin(9600);
int suma=0,producto=0;
Serial.println();
int num1 = DataCapture::captureInteger("Digite el primer numero: ");
int num2 = DataCapture::captureInteger("Digite el segundo numero: ");
calcular(num1,num2,suma,producto);
Serial.println(suma);
Serial.println(producto);
}

void calcular(int num1,int num2,int& suma, int& producto){
suma=num1+num2;
producto=num1*num2;
}
void loop() {
  // put your main code here, to run repeatedly:
}
