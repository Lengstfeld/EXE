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
double logicaFactorial(double vAoB)
{
	double factorial=1;
	for(int i=1;i<=vAoB;i++)
	{
		factorial*=i;
	}
	return factorial;
}

