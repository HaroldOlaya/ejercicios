#include <Arduino.h>
#include <DataCapture.h>

int miLista[5]={10,20,30,5};

void setup() {
  Serial.begin(9600);
  Serial.println();
  for(int i =0;i<4;i++){
    Serial.println(miLista[i]);
  }

}

void loop() {

}

