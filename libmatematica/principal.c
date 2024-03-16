#include<stdio.h>
#include"pontosDistancia.h"
int main(){
	ponto p1, p2;
	float a, b;
	printf ("Digite as coordenadas do primeiro ponto:\n");
	scanf ("%f%f",&a, &b);
	p1 = criarPonto (a,b);
	printf ("Digite as coordenadas do segundo ponto:\n");
	scanf ("%f%f",&a, &b);
        p2 = criarPonto (a,b);
	printf ("Distancia: %f \n", distancia (p1,p2);
	return 0;
}


