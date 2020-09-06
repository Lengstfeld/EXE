/*
 ============================================================================
 Name        : Calculadora.c
 Author      : Leandro Engstfeld
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Logica.h"

int main(void){
	int A=0;
	int B=0;
	setbuf(stdout,NULL);
	printf("*****Calculadora*****");
	printf("\n\nIngrese valor de A: ");
	scanf("%d", &A);
	printf("Ingrese valor de B: ");
	scanf("%d", &B);
	printf("\n*********************");
	logica(A,B);
	return EXIT_SUCCESS;
}


