#include<math.h>
#include<stdio.h>

typedef struct {
	float x;
	float y;
}ponto;

ponto criarPonto (float x, float y);
float distancia (ponto p1, ponto p2);
