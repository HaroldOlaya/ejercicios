#include <Arduino.h>
#include <DataCapture.h>


void intercambio(float *,float *);

void setup() {
Serial.begin(9600);
Serial.println();
float num1=DataCapture::captureFloat("Digite el primer numero : ");
float num2=DataCapture::captureFloat("Digite el segundo numero : ");

Serial.println(num1);
Serial.println(num2);

intercambio(&num1,&num2);

Serial.println(num1);
Serial.println(num2);
}

void loop() {



}


void intercambio( float *dirNm1,float *dirNm2){

float aux;

aux= *dirNm1;
*dirNm1 = *dirNm2;
*dirNm2= aux;

}
