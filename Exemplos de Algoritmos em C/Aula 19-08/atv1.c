#include <stdio.h>
#include <stdlib.h>
int main( )
{
int num = 0;
do{
printf("Digite um numero entre 10 e 100: ");
scanf("%d", &num);
}while(num <= 10 || num >= 100);
printf("Valor correto.\n");
return 0;
}
