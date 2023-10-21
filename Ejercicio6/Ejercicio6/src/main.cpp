#include <Arduino.h>


void setup() {
Serial.begin(9600);
Serial.println();
int numeros[5]={5,4,3,2,1};
int i,pos,aux;

for (i=0;i<5;i++){
  pos=i;
  aux=numeros[i];

  while((pos>0)&&(numeros[pos-1]>aux)){
    numeros[pos]=numeros[pos-1];
    pos--;
  }
  numeros[pos]=aux;
}
for (i=0;i<5;i++){
  Serial.print(numeros[i]);
}


}

void loop() {
  // put your main code here, to run repeatedly:
}


