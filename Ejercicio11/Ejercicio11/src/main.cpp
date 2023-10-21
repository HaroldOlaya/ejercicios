#include <Arduino.h>
#include <DataCapture.h>


struct Nodo{
  int dato;
  Nodo *siguiente;
};

void agregarPila(Nodo *&,int);

void setup() {
  Serial.begin(9600);
  Serial.println();
  Nodo *pila=NULL;
  int n1,n2;

  n1=DataCapture::captureInteger("Digite un numero: ");

  agregarPila(pila,n1);

}

void loop() {
  // put your main code here, to run repeatedly:
}

void agregarPila(Nodo *&pila,int n){
  Nodo *nuevo_nodo=new Nodo();
  nuevo_nodo->dato=n;
  nuevo_nodo->siguiente=pila;
  pila=nuevo_nodo;
  Serial.println("Se agrego correctamente a la pila");

}
