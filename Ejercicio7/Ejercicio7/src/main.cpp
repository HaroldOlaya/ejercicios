#include <Arduino.h>
#include <DataCapture.h>

struct Empleado{
  String nombre;
  float salario;
}emp[100];

void setup() {
Serial.begin(9600);
Serial.println();
int empleados = DataCapture::captureInteger("Numero de empleados: ");
for (int i = 0; i < empleados; i++) {  // En este ejemplo, ingresaremos datos para 3 empleados, puedes ajustar este valor según tus necesidades
    emp[i].nombre = DataCapture::captureString("Ingrese el nombre: ");  
    emp[i].salario = DataCapture::captureFloat("Ingrese el salario: ");
}
for (int i = 0; i < empleados; i++) { // Mostrar los datos de los 3 empleados ingresados
    Serial.print("Empleado ");
    Serial.print(i + 1);
    Serial.print(": Nombre = ");
    Serial.print(emp[i].nombre);
    Serial.print(", Salario = $");
    Serial.println(emp[i].salario, 2); // Mostrar el salario con dos decimales
}
}
void loop() {
  // Tu código de loop aquí
}
