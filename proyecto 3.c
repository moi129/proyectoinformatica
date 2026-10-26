//leer una longitud en centimetros
//y mostrarla en pies y pulgadas

#include <stdio.h>
main(){
//pedir datos
printf("ingresar la longitud en centimetros ");
float centimetros;
scanf("%f",&centimetros);

//operaciones
float pies ;
float pulgadas;

pies = centimetros / 30.48;
pulgadas = centimetros /2.54;

//mostrar datos
printf("la longitud en pies es:%.2f\n",pies);
printf("la longitud en pulgadas es:%.2f\n",pulgadas);



}
