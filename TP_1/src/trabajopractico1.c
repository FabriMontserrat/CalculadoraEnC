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
	int a;
	int b;
	int respuesta;
	char seguir = 's';
	char noValido = 's';

	while(seguir == 's' )
	{
		printf("Ingrese el primer numero:\n ");
		scanf("%d",&a);
		fflush (stdin);
		printf("Ingrese el segundo numero:\n ");
		scanf("%d",&b);
		fflush (stdin);

		while (noValido == 's')
		{
			printf("Primer numero: %d Segundo numero: %d\n",a,b);
			printf("Seleccione una opcion:\n");
			printf("1 = Sumar\n");
			printf("2 = Restar\n");
			printf("3 = Multiplicar\n");
			printf("4 = Dividir\n");
			printf("5 = Factorial\n");
			printf("6 = Todas las anteriores\n");
			printf("7 = Salir \n;");
			scanf("%d",&respuesta);
			fflush (stdin);

				switch(respuesta)
				{
					case 1:
						printf("El resultado de la suma es: %d\n",suma(a,b));
						noValido = 'n';
					break;

					case 2:
						printf("El resultado de la resta es: %d\n",resta(a,b));
						noValido = 'n';
					break;

					case 3:
										printf("La multiplicacion da: %d \n",multiplicacion(a,b));
										noValido = 'n';
					break;

					case 4:
						if(b==0)
						{
							printf("No se puede dividir por 0\n");
						}
						else
						{
							printf("El resultado de la division es: %f\n",division(a,b));
						}
						noValido = 'n';
					 break;

					case 5:
						if(a >= 0 && b >= 0)
						{
							printf("El factorial de %d es %d y el factorial de %d es %d\n",a,factorial(a),b,factorial(b));
							noValido = 'n';
						}
						else
							if(a<0)
							{
								printf("%d es negativo y no es posible, el factorial de %d es %d\n",a,b,factorial(b));
								noValido = 'n';
							}
							else
							{
								printf("%d es negativo y no es posible, el factorial de %d es %d\n",b,a,factorial(a));
								noValido = 'n';
							}
					break;

					case 6:
						printf("El resultado de la suma es: %d\n",suma(a,b));
						printf("El resultado de la resta es: %d\n",resta(a,b));
						printf("La multiplicacion da: %d \n",multiplicacion(a,b));
						if(b==0)
							{
								printf("No se puede dividir por 0\n");
							}
							else
								{
									printf("El resultado de la division es: %f\n",division(a,b));
								}
						if(a >= 0 && b >= 0)
												{
													printf("El factorial de %d es %d y el factorial de %d es %d\n",a,factorial(a),b,factorial(b));
													noValido = 'n';
												}
												else
													if(a<0)
													{
														printf("%d es negativo y no es posible, el factorial de %d es %d\n",a,b,factorial(b));
														noValido = 'n';
													}
													else
													{
														printf("%d es negativo y no es posible, el factorial de %d es %d\n",b,a,factorial(a));
														noValido = 'n';
													}
						noValido = 'n';
						break;

					case 7:
						noValido = 'n';
						seguir = 'n';
					break;

					default:
						printf("Ingrese una opcion valida:\n");
						noValido = 's';

				}
		}
			if(respuesta >= 1 && respuesta <= 6)
				{
				printf("quiere realizar otra operacion? s/n\n");
				scanf("%c",&seguir);
				fflush (stdin);
					while(seguir != 's' && seguir != 'n')
					{
						printf("Ingrese una opcion valida: s/n\n");
						scanf("%c",&seguir);
						fflush (stdin);
					}

					if(seguir == 's')
					{
					noValido = 's';
					}
				}
	}



system("pause");
return EXIT_SUCCESS;

}
