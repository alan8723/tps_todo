#include "tp_1.h"
#include <stdio.h>

//pedir al usuario un numero
int getInt(char* mensaje){
int num;

printf("%s", mensaje);
fflush(stdin);
scanf("%d", &num);

return num;
}
//pedir al usuario una letra
char getChar(char* mensaje){
char let;

printf("%s", mensaje);
fflush(stdin);
scanf("%c", &let);

return let;

}
//sumar dos numeros
int suma(int num1,int num2){
    int resultado;

    resultado = num1 + num2;

    return resultado;
}
//restarc dos numeros
int resta(int num1, int num2){
    int resultado;

    resultado = num1 - num2;

    return resultado;
}
//dividir dos numeros
int divicion(int num1, int num2){
    float resultado;

    resultado = (float) num1 / num2;

    return resultado;
}
//multiplicar dos numeros
int multiplicacion(int num1, int num2){
    int resultado;

    resultado = num1 * num2;

    return resultado;
}
//factorial
int factorial(int num){
int acumulador = 1;

for(int i = 1; i < num+1; i++){

    acumulador *= i;
}

return acumulador;
}

