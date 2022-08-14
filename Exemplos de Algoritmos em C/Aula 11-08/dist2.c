/* Ler dois números distintos e imprimir o maior deles */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    if (a > b)
       printf("O numero maior e %d\n", a);
    else
       printf("O numero maior e %d\n", b);
    return 0;
}
