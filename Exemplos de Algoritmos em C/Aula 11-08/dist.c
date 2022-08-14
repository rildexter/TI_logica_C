/* Ler dois números distintos e imprimi-los ordenados. */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, aux;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
/*se o primeiro for maior que o segundo inverter os valores*/
    if (a > b) {
       aux = a;
       a = b;
       b = aux;
    }
    printf("Valores ordenados => %d %d\n", a, b);
    return 0;

}
