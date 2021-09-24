/*
 * libreriacalc.c
 *
 *  Created on: 23 sep. 2021
 *      Author: Fabri
 */

#include "libreriacalc.h"
int suma(int A,int B){
   return A+B;
}
int resta(int A,int B){
   return A-B;
}
int multiplicacion(int A,int B){
   return A*B;
}
float division(int A, int B){
	return (float)A/B;
}
int factorial (int a)
{
    int fact;
    if (a == 0 || a == 1)
    {
        fact = 1;
    }
    else
    {
        fact = a * factorial(a - 1);
    }

    return fact;
}

