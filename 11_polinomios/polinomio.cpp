
#include <stdio.h>
#include <stdlib.h>
#define N 20
int grado;

double f (double pol[], double punto){
	double pot = 1 ,resultado;
	for(int i=0; i <= grado; i++, pot *=punto)
		resultado += pol[i]*pot;
	return resultado;
}

int main(){
	int i = 0;
	double pol[N], punto;
	printf("¿Grado del polinomio?");
	scanf(" %i", &grado);
	for(i; i < grado; i++){
		printf("Introduce factor para x elevado a %i\n", i);
		scanf(" %lf", &pol[i]);
	}
	for(i; i < N; i++)
		pol[i] = 0;
	printf("¿En qué punto?\n");
	scanf(" %lf", &punto);

	

	printf("La solución es:%.2lf \n", f(pol, punto));
}
