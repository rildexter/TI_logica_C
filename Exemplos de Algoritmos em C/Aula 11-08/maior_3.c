/* Ler três números inteiros distintos e imprimir o maior */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Digite o terceiro numero: ");
    scanf("%d", &c);
    printf("O maior dos 3 e ");
    if (a > b && a > c)
       printf("%d\n", a);
    else if (b > a && b > c)
            printf("%d\n", b);
         else if (c > a && c > b)
                 printf("%d\n", c);
    return 0;
}
