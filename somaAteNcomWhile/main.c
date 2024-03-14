#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma=0,i=1, n;
    printf ("Digite um numero:");
    scanf ("%d", &n);
    while (i<=n){
        soma = soma + i;
        i++;
    }
    printf ("Soma: %d", soma);
    return 0;
}
