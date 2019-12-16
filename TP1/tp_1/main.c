#include <stdio.h>
#include <stdlib.h>
#include "tp_1.h"

int main()
{
    int a;
    int b;
    int salir;

    a = getInt("ingrese 1er operando 'a': \n");
    b = getInt("ingrese 12do operando 'b': \n");


do{

        system("pause");
        system("cls");
    switch(getChar("a)Sumar\n b)Restar\n c)dividir\n d)multiplicar\n e)factorial\n f)Salir\n\n")){


case 'a':
    printf("el resutado de a + b = %d\n", suma(a, b));
    break;

case 'b':
    printf("el resutado de a - b = %d\n", resta(a, b));
    break;

case 'c':
    if(b !=0 ){
    printf("el resutado de a / b = %d\n", divicion(a, b));
    }else{
    printf("no se puede dividir por 0\n");
    }
    break;

case 'd':
    printf("el resutado de a * b = %d\n", multiplicacion(a, b));
    break;

case 'e':
    printf("el factirial de 'a' es : %d \n el factorial de 'b' es: %d\n", factorial(a), factorial(b));
    break;

case 'f':
    printf("salir");
    salir = 0;
    break;
default:
    printf("error en seleccionar operacion");
    }


}while(salir != 0);

    return 0;
}
