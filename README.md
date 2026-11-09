//DATOS PERSONALES:

//Leer el nombre y el apellido de una persona, su año de nacimiento y el año actual.
//Mostrar el nombre en formato “Apellido, Nombre” y su edad.

#include <stdio.h>

main () {
//DATOS
char NOMBRE [7]= "Juanito";
char APELLIDO [7]= "Pérez ";
int YEAR= 2026;
int NACIMIENTO= 1999;

//OPERACION
int EDAD;
EDAD= YEAR-NACIMIENTO;

//MOSTRAR DATOS
printf("\nAPELLIDO: %s", APELLIDO);
printf("\nNOMBRE: %s", NOMBRE);
printf("\nEDAD: %d", EDAD);
}
