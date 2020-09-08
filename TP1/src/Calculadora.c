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
	char salir='n';
	int menu;

	printf("*****Calculadora*****");
	do{
		printf("\n\n1)Ingresar 1er operando, valor actual: %d", A);
		printf("\n2)Ingresar 2do operando, valor actual: %d", B);
		printf("\n3)Calcular todas las operaciones");
		printf("\n4)Informar resultados");
		printf("\n5)Salir");
		printf("\n\n*********************");
		printf("\n\nIngrese la opcion que desea usar: ");
		scanf("%d", &menu);
		switch(menu){
		case 1:
			printf("\n\nIngrese valor de A: ");
			scanf("%d", &A);
			break;
		case 2:
			printf("\n\nIngrese valor de B: ");
			scanf("%d", &B);
			break;
		case 3:
			resultadoSuma = logicaSuma(A,B);
			resultadoResta = logicaResta(A,B);
			resultadoDivision = logicaDivision(A,B);
			resultadoMultiplicacion = logicaMultiplicacion(A,B);
			resultadoFactorialA = logicaFactorialA(A,B);
			resultadoFactorialB = logicaFactorialB(A,B);
			break;
		case 4:
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
			printf("\nEl resultado del factorial de A es: %d", resultadoFactorialA);
			printf("\nEl resultado del factorial de B es: %d", resultadoFactorialB);
			break;
		case 5:
			do{
				printf("\n\nEsta seguro que quiere salir? s/n :");
				fflush(stdin);
				scanf("%c", &salir);
			}while(salir!='n' && salir!='s');
			break;
		default:
			printf("\n\nError, opcion inexistente\n\n");
			system("pause");
			break;
		}
		system("CLS");
		printf("\n*********************");
	}while(salir=='n');
	system("CLS");
	printf("\n**********!***********");
	printf("\n**********G***********");
	printf("\n**********R***********");
	printf("\n**********A***********");
	printf("\n**********C***********");
	printf("\n**********I***********");
	printf("\n**********A***********");
	printf("\n**********S***********");
	printf("\n**********!***********");
	return EXIT_SUCCESS;
}


