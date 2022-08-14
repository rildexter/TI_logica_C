#include <stdio.h>
#include <stdlib.h>
int main()
{
    int max, num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    /*if (num1 > num2)
    max = num1;
    else
   max = num2;*/
   max = (num1 > num2) ? num1 : num2;

     printf("O maior numero foi %d\n", max);
    return 0;
}
