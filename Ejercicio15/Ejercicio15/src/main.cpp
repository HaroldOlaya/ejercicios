#include <Arduino.h>
#include <DataCapture.h>

class MiClase {
private:
  int miVariable;

public:
  MiClase() {
    miVariable = 0;
  }


  int getMiVariable() {
    return miVariable;
  }


  void setMiVariable(int valor) {
    miVariable = valor;
  }
};

MiClase objeto;  
void cambiarValor(){
  int nuevoValor = DataCapture::captureInteger("Enviele el valor: ");
  objeto.setMiVariable(nuevoValor);  
  int valor = objeto.getMiVariable();  
  Serial.print("El valor de miVariable es: ");
  Serial.println(valor);
}

void setup() {
  Serial.begin(9600);
  Serial.println();
  for (int i=0;i<2;i++){
    cambiarValor();
  }
}

void loop() {

}
