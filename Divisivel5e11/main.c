#include <stdio.h>
#include <stdlib.h>

//O programa testa se um número é divisível por 5 ou 11

int main()
{
    int numero;
    printf ("Digite um numero:");
    scanf ("%d", &numero);
    printf ("\n");
    if ((numero%5)==0)
        printf ("Numero divisivel por 5.\n");
    if ((numero%11)==0)
        printf ("Numero divisivel por 11.\n");
    if ((numero%5)&&(numero%11))
        printf ("Numero nao e divisivel nem por 5 nem 11.\n");
    return 0;
}
