/*
 ============================================================================
 Name        : Actividad1.c
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
	int Suma;


	printf("\n Ingrese el primer número: ");
	scanf("%d", &numeroUno);
	printf("\n Ingrese el segundo número: ");
	scanf("%d", &numeroDos);

	Suma = numeroUno + numeroDos;

	printf("\n El resultado es: %d", Suma);


	return EXIT_SUCCESS;
}
