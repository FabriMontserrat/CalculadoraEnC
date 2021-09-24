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
int factorial(int A){
	int  b, fact = 1;
	for (b = A; b > 1; b--){
		fact = fact * b;
	}
	  return fact;
}
