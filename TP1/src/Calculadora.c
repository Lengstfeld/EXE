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

int logica(int A, int B);
int logicaSuma(int vA, int vB);
int logicaResta(int vA, int vB);
int logicaDivision(int vA, int vB);
int logicaMultiplicacion(int vA, int vB);
int logicaFactorial(int vA, int vB);

int main(void){
	int A=0;
	int B=0;
	setbuf(stdout,NULL);
	printf("*****Calculadora*****");
	printf("\n\nIngrese valor de A: ");
	scanf("%d", &A);
	printf("Ingrese valor de B: ");
	scanf("%d", &B);
	printf("\n\n*********************");
	logica(A,B);
	return EXIT_SUCCESS;
}
int logica(int A, int B){
	logicaSuma(A,B);
	logicaResta(A,B);
	logicaDivision(A,B);
	logicaMultiplicacion(A,B);
	logicaFactorial(A,B);
	return 0;
}

int logicaSuma(int vA, int vB){
	int suma=0;
	suma=vA+vB;
	printf("\nEl resultado de la suma es: %.0f", suma);
	return 0;
}
int logicaResta(int vA, int vB){
	int resta=0;
	resta=vA-vB;
	printf("\nEl resultado de la resta es: %d", resta);
	return 0;
}
int logicaDivision(int vA, int vB){
	int division=0;
	division=vA/vB;
	printf("\nEl resultado de la division es: %d", division);
	return 0;
}
int logicaMultiplicacion(int vA, int vB){
	int multiplicacion=0;
	multiplicacion=vA*vB;
	printf("\nEl resultado de la multiplicacion es: %d", multiplicacion);
	return 0;
}
int logicaFactorial(int vA, int vB){
	int factorialA=0;
	int factorialB=0;
	factorialA=vA.(vA-1);
	printf("\nEl resultado del factorial de A es: %d", factorialA);
	printf("\nEl resultado del factorial de B es: %d", factorialB);
	return 0;
}

