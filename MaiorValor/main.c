#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *n, maior;
    int i, tamanho;
    printf ("Digite o numero de elementos do vetor:");
    scanf ("%d", &tamanho);
    n = (float *)calloc (tamanho, sizeof(float));  //O vetor é criado usando alocação dinâmica, uma vez que não é possível saber o seu tamanho antes da
    printf ("Entre com o vetor:");                 // execução do programa
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
