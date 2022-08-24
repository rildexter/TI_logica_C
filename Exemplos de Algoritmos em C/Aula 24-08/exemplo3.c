#include <stdio.h>
#include <stdlib.h>
int main( )
{
int soma = 0, i;
for(i = 1; i < 101; i++)
soma = soma + i;
printf("O valor do somatorio de 1 ate 100 eh: %d\n", soma);
return 0;
}
