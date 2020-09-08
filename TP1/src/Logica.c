/*
 * Logica.c
 *
 *  Created on: 6 sep. 2020
 *      Author: lengs
 */
int logicaSuma(int vA, int vB)
{
	int suma=0;
	suma=vA+vB;
	return suma;
}
int logicaResta(int vA, int vB)
{
	int resta=0;
	resta=vA-vB;
	return resta;
}
float logicaDivision(int vA, int vB)
{
	float division=0;
	division=(float)vA/vB;
	return division;
}
int logicaMultiplicacion(int vA, int vB)
{
	int multiplicacion=0;
	multiplicacion=vA*vB;

	return multiplicacion;
}
int logicaFactorialA(int vA, int vB)
{
	int factorialA=1;
	for(int i=1;i<=vA;i++)
	{
		factorialA*=i;
	}
	return factorialA;
}
int logicaFactorialB(int vA, int vB)
{
	int factorialB=1;
	for(int i=1;i<=vB;i++)
	{
		factorialB*=i;
	}
	return factorialB;
}
