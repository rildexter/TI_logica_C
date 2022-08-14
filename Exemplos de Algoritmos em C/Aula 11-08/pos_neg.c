// Ler um numero inteiro e informar se é negativo, positivo ou nulo

#include <stdio.h>
int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    if (n < 0)
       printf("O numero digitado e negativo!\n");
    if (n > 0)
       printf("O numero digitado e positivo!\n");
    if (n == 0)
       printf("O numero digitado e nulo!\n");
    return 0;
}
