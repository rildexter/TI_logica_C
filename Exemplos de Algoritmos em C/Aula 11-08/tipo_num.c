/* Ler um numero inteiro e informar se é negativo,
 positivo ou nulo */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    if (n < 0)
       printf("O numero digitado e negativo!\n");
    else if (n > 0)
            printf("O numero digitado e positivo!\n");
         else
            printf("O numero digitado e nulo!\n");
    return 0;
}
