//calculadora

#include<stdio.h>

main(){
//Variables para numeros
int numeroUno;
int numeroDos;
//variables para operaciones
int suma;
int resta;
int multiplicacion;
int division;

printf("Calculadora pro max\n");
//pedir numero uno
printf("ingresar un numero:");
scanf("%d",&numeroUno);

//pedir segundo numero
printf("ingresar otro numero:");
scanf("%d",&numeroDos);

//operaciones
suma = numeroUno + numeroDos;
printf("el resultado de la suma es:%d", suma);
resta = numeroUno - numeroDos ;
printf("el resultado de la resta es:%d", resta);
multiplicacion = numeroUno * numeroDos;
printf("el resultado de la multiplicacion es:%d", multiplicacion);
division = numeroUno / numeroDos;
printf("el resultado de la division es:%d",division);


}
