#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma=0,i, n;
    printf ("Digite um numero:");
    scanf ("%d", &n);
    for (i=1; i <= n; i++)
        soma = soma + i;
    printf ("Soma: %d", soma);
    return 0;
}
