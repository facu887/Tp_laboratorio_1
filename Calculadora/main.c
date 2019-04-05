#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
int main()
{
    int num1;
    int num2;
    int sumar;
    int restar;
    int opcion;
    char seguir;
    int multiplicar;
    float dividir;
    int factorear;
    int factorear2;
    do {
    num1 = numeros();
    num2 = numeros();
    printf("Menu de opciones\n ");
    printf(" 1) Sumar\n ");
    printf(" 2) Restar\n ");
    printf(" 3) Multiplicar\n ");
    printf(" 4) Dividir\n ");
    printf("\5) Factoreo\n ");
    printf("Eliga una opcion\n ");
    scanf ("%d", &opcion);
    switch(opcion){
    case 1:
    sumar = suma(num1,num2);
    printf("\nEl resultado de la suma es: %d", sumar);
    break;
    case 2:
    restar = resta(num1,num2);
    printf("\nEl resultado de la resta es: %d", restar);
    break;
    case 3:
    multiplicar = multiplicacion(num1,num2);
    printf("\nEl resultado de la multiplicacion es: %d", multiplicar);
    break;
    case 4:
    dividir = division(num1,num2);
    printf("\nEl resultado de la division es: %f", dividir);
    break;
    case 5:
    factorear = factoreo1(num1);
    printf("\nEl factorial del primer numero es: %d", factorear);
    factorear2 = factoreo2(num2);
    printf("\nEl factorial del primer numero es: %d", factorear2);
    break;
    default:
        printf("\nEligio una opcion incorrecta");
    }
    printf("\n¿Desea seguir?\n");
    scanf("%s", &seguir);
    }while (seguir == 's');
    return 0;
}
