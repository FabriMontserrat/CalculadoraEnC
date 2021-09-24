/*
 ============================================================================
 Name        : trabajopractico1.c
 Author      : Fabrizio Montserrat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "libreriacalc.h"

int main(void) {
	setbuf(stdout,NULL);
	int a = 0;
	int b = 0;
	int respuesta;
	char mostrarMenu = 's';
	int resSuma = 0;
	int resResta = 0;
	float resDivision = 0;
	int resMultiplicacion = 0;
	int resFactorialA = 0;
	int resFactorialB = 0;
	int calculo = 0;



	while (mostrarMenu == 's')
	{
		printf("1 = Ingresar primer operando (A=%d)\n",a);
		printf("2 = Ingresar segundo operando (B=%d)\n",b);
		printf("3 = Calcular todas las operaciones\n");
		printf("4 = Informar resultados\n");
		printf("5 = Salir\n");
		scanf("%d",&respuesta);
		fflush (stdin);

			switch(respuesta)
			{
				case 1:
					printf("Ingrese el primer numero:\n");
					scanf("%d",&a);
					fflush (stdin);
					mostrarMenu = 's';
					calculo = 0;
				break;

				case 2:
					printf("Ingrese el segundo numero:\n ");
					scanf("%d",&b);
					fflush (stdin);
					mostrarMenu = 's';
					calculo = 0;
				break;

				case 3:
					resSuma = suma(a,b);
					resResta = resta(a,b);
					if(b != 0)
					{
						resDivision =division(a,b);
					}
					resMultiplicacion = multiplicacion(a,b);
									if(a >= 0)
										{
										resFactorialA =	factorial(a);
										}
									if(b >= 0)
										{
										resFactorialB = factorial(b);
										}
					calculo = 1;
				break;

				case 4:
					if(calculo == 1)
						{
							printf("El resultado de %d + %d es: %d\n",a,b,resSuma);
							printf("El resultado de %d - %d es: %d\n",a,b,resResta);
							printf("El resultado de %d * %d es: %d\n",a,b,resMultiplicacion);
							if(b == 0)
							{
								printf("No se puede dividir por 0\n");
							}
							else
							{
								printf("El resultado de %d / %d es: %f\n",a,b,resDivision);
							}
							printf("Factorial:\nFactorial operador A: ");
							if(a < 0)
											{
												printf("(No se pueden numeros negativos)");
											}
											else
											{
												printf("%d",resFactorialA);
											}
							printf("\nFactorial operador B: ");
							if(b < 0)
										{
											printf("(No se pueden numeros negativos)\n");
										}
											else
											{
												printf("%d\n",resFactorialB);
											}
						}
					else
					{
						printf("No se pueden mostrar los resultados sin antes calcularlos\n");
					}
					system("pause");
				break;

				case 5:
					mostrarMenu = 'n';
				break;

				default:
					printf("Ingrese una opcion valida:\n");
					mostrarMenu = 's';
				break;

			}
	}

system("pause");
return EXIT_SUCCESS;

}

