#include<stdio.h>
#include<math.h>

ponto criarPonto(float a, float b){
	ponto p;
	p.x = a;
	p.y = b;
        return p;
}


float distancia (ponto p1,ponto p2){
	return sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
}
