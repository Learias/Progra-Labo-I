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


	printf("\n Ingrese el primer número: ");
		scanf("%d", &numeroUno);
	printf("\n Ingrese el segundo número: ");
		scanf("%d", &numeroDos);
	printf("\n Ingrese el tercer número: ");
		scanf("%d", &numeroTres);
	printf("\n Ingrese el cuatro número: ");
		scanf("%d", &numeroCuatro);
	printf("\n Ingrese el quinto número: ");
		scanf("%d", &numeroCinco);

	suma = numeroUno + numeroDos + numeroTres + numeroCuatro + numeroCinco;

	promedio = suma / contador;

	printf("\n El promedio de los cinco números es: %2.f", promedio);


	return EXIT_SUCCESS;
}
