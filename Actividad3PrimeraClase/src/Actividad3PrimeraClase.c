/*
 ============================================================================
 Name        : Actividad3PrimeraClase.c
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

	int numero;
	int numeroAlmacenado = 0;
	int suma;
	float promedio;
	int contador= 0;
	int contador1= 1;
	char respuesta;

do{
	printf("\nIngrese el numero %d:", contador1);
	scanf("%d", &numero);
	suma = numero + numeroAlmacenado;
	numeroAlmacenado = numero;
	contador++;
	contador1++;
	printf("\n Quiere seguir ingresando números? (S/N)");
	fflush(stdin);
	scanf("%c", &respuesta);
	respuesta = tolower(respuesta);
   }while(respuesta == 's');

	if(respuesta != 's'){
	promedio = suma / contador;

	printf("\n El promedio de los números es: %1.f", promedio);
	}

	return 0;
}
