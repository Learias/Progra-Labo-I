/*
 ============================================================================
 Name        : Actividad2PrimeraClase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout,NULL);

	int numeroUno;
	int numeroDos;
	int numeroTres;
	int numeroCuatro;
	int numeroCinco;
	int suma;
	float promedio;
	int contador = 5;


	printf("\n Ingrese el primer n�mero: ");
		scanf("%d", &numeroUno);
	printf("\n Ingrese el segundo n�mero: ");
		scanf("%d", &numeroDos);
	printf("\n Ingrese el tercer n�mero: ");
		scanf("%d", &numeroTres);
	printf("\n Ingrese el cuatro n�mero: ");
		scanf("%d", &numeroCuatro);
	printf("\n Ingrese el quinto n�mero: ");
		scanf("%d", &numeroCinco);

	suma = numeroUno + numeroDos + numeroTres + numeroCuatro + numeroCinco;

	promedio = suma / contador;

	printf("\n El promedio de los cinco n�meros es: %2.f", promedio);


	return EXIT_SUCCESS;
}
