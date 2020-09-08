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
	setbuf(stdout,NULL);
	int A=0;
	int B=0;
	int resultadoSuma=0;
	int resultadoResta=0;
	float resultadoDivision=0;
	int resultadoMultiplicacion=0;
	int resultadoFactorialA=0;
	int resultadoFactorialB=0;
	printf("*****Calculadora*****");
	printf("\n\nIngrese valor de A: ");
	scanf("%d", &A);
	printf("Ingrese valor de B: ");
	scanf("%d", &B);
	printf("\n*********************");
	resultadoSuma = logicaSuma(A,B);
	resultadoResta = logicaResta(A,B);
	resultadoDivision = logicaDivision(A,B);
	resultadoMultiplicacion = logicaMultiplicacion(A,B);
	resultadoFactorialA = logicaFactorialA(A,B);
	resultadoFactorialB = logicaFactorialB(A,B);
	printf("\n\nEl resultado de la suma es: %d", resultadoSuma);
	printf("\nEl resultado de la resta es: %d", resultadoResta);
	if(A!=0 && B!=0)
	{
		printf("\nEl resultado de la division es: %.2f", resultadoDivision);
	}
	else
	{
		printf("\nNo se puede divir entre 0");
	}
	printf("\nEl resultado de la multiplicacion es: %d", resultadoMultiplicacion);
	if(A==0)
	{
		printf("\nFactorial de A es 0");
	}
	else if(A!=0)
	{
		printf("\nEl resultado del factorial de A es: %d", resultadoFactorialA);
	}
	if(B==0)
	{
		printf("\nFactorial de B es 0");
	}
	else if(B!=0)
	{
		printf("\nEl resultado del factorial de B es: %d", resultadoFactorialB);
	}
	return EXIT_SUCCESS;
}


