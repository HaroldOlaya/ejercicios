#include <Arduino.h>
#include <DataCapture.h>


void setup() {
  Serial.begin(9600);
  Serial.println();
  
  char antiguo[]="hola";
  char nuevo[30];
  strcpy(nuevo,antiguo);

  Serial.println(antiguo);
  Serial.println(nuevo);
}

void loop() {
  
}