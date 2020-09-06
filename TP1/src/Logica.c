/*
 * Logica.c
 *
 *  Created on: 6 sep. 2020
 *      Author: lengs
 */
#include <stdio.h>

int logica(int vA, int vB){
	int logicaSuma(int vA, int vB);
	int logicaResta(int vA, int vB);
	int logicaDivision(int vA, int vB);
	int logicaMultiplicacion(int vA, int vB);
	int logicaFactorial(int vA, int vB);
	return 0;
}
int logicaSuma(int vA, int vB){
	int suma=0;
	suma=vA+vB;
	printf("\n\nEl resultado de la suma es: %d", suma);
	return 0;
}
int logicaResta(int vA, int vB){
	int resta=0;
	resta=vA-vB;
	printf("\nEl resultado de la resta es: %d", resta);
	return 0;
}
int logicaDivision(int vA, int vB){
	float division=0;
	division=(float)vA/vB;
	if(vA!=0 && vB!=0){
		printf("\nEl resultado de la division es: %.2f", division);
	}else{
		printf("\nNo se puede divir entre 0");
	}
	return 0;
}
int logicaMultiplicacion(int vA, int vB){
	int multiplicacion=0;
	multiplicacion=vA*vB;
	printf("\nEl resultado de la multiplicacion es: %d", multiplicacion);
	return 0;
}
int logicaFactorial(int vA, int vB){
	int factorialA=1;
	int factorialB=1;
	for(int i=1;i<=vA;i++){
		factorialA*=i;
	}
	for(int i=1;i<=vB;i++){
		factorialB*=i;
		}
	if(vA==0){
			printf("\nValor de A es 0");
	}else if(vA!=0){
		printf("\nEl resultado del factorial de A es: %d", factorialA);
	}
	if(vB==0){
			printf("\nValor de B es 0");
	}else if(vB!=0){
		printf("\nEl resultado del factorial de B es: %d", factorialB);
	}
	return 0;
}
