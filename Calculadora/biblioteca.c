#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* \brief Solicita un numero y lo devuelve
* \return el numero que ingreso el usuario
*
*/

int numeros()
{
    int numeros;
    printf ("Ingrese un numero: ");
    scanf ("%d", &numeros);
    return (numeros);
}
/**
* \brief Recibe el numero 1 y numero 2
* \param s1 el valor que ingreso para el primer numero
* \param s2 el valor que ingreso para el segundo numero
* \return el resultado de la suma
*
*/

int suma(int s1, int s2)
{
    int resultado;
    resultado = s1 + s2;
    return (resultado);
}

/**
* \brief Recibe el numero 1 y numero 2
* \param r1 el valor que ingreso para el primer numero
* \param r2 el valor que ingreso para el segundo numero
* \return el resultado de la resta
*
*/

int resta (int r1, int r2)
{
    int resultado;
    resultado = r1 - r2;
    return (resultado);
}

/**
* \brief Recibe el numero 1 y numero 2
* \param m1 el valor que ingreso para el primer numero
* \param m2 el valor que ingreso para el segundo numero
* \return el resultado de la multiplicacion
*
*/


int multiplicacion(int m1, int m2)
{
    int resultado;
    resultado = m1 * m2;
    return (resultado);
}


/**
* \brief Recibe el numero 1 y numero 2
* \param d1 el valor que ingreso para el primer numero
* \param d2 el valor que ingreso para el segundo numero
* \return el resultado de la division
*
*/

float division(int d1, int d2)
{
    float resultado;
    if (d2 == 0) {
        printf("\nNo es posible dividir por 0");
        return 0;
    }
    else {
        resultado = d1 / d2;
        return (resultado);
    }
}

/**
* \brief Recibe el numero 1
* \param f1 el valor que ingreso para el primer numero
* \return el resultado del factoreo del primer numero
*
*/

int factoreo1(int f1)
{
    int resultado;
    if (f1 == 1){
        return 1;
    }
   else {
   resultado = f1 * (f1 - 1);
   return (resultado);
   }
}

/**
* \brief Recibe el numero 2
* \param f2 el valor que ingreso para el primer numero
* \return el resultado del factoreo del segundo numero
*
*/

int factoreo2(int f2)
{
    int resultado;
    if (f2 == 1){
        return 1;
    }
   else {
   resultado = f2 * (f2 - 1);
   return (resultado);
   }
}
