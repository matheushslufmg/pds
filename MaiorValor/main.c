#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *n, maior;
    int i, tamanho;
    printf ("Digite o numero de elementos do vetor:");
    scanf ("%d", &tamanho);
    n = (float *)calloc (tamanho, sizeof(float));  //O vetor � criado usando aloca��o din�mica, uma vez que n�o � poss�vel saber o seu tamanho antes da
    printf ("Entre com o vetor:");                 // execu��o do programa
    for (i=0; i < tamanho; i++)
        scanf ("%f", &n[i]);
    maior = n[0];
    for (i=1; i < tamanho; i++)
        if (n[i] > maior)
            maior = n[i];
    free (n);
    printf ("Maior valor: %f \n", maior);
    return 0;
}
