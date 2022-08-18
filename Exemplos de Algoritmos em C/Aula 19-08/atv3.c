#include <stdio.h>
#include <stdlib.h>
int main( )
{
int fat = 1, i, n;
do{
printf("Digite um numero maior que zero: ");
scanf("%d", &n);
}while(n <= 0);
for (i = 1; i <= n; i++)
fat = fat * i;
printf("O valor do fatorial de %d eh: %d\n", n, fat);
return 0;
}

