#include <stdio.h>
#include <stdlib.h>
int main( )
{
float preco, total, lucro, custo;
int n;
printf("Digite o preco da unidade do tablet: ");
do{
scanf("%f", &preco);
if (preco < 0)
printf("Erro. Digite um valor valido para o preco: ");
}while(preco < 0);
printf("Digite a quantidade de tablets vendidas: ");
scanf("%d", &n);
total = preco * n;
custo = n * 300;
lucro = total - custo;
if (lucro > 0)
printf("Lucro de R$: %.2f\n", lucro);
else if (lucro < 0)
printf("Deficit de R$: %.2f\n", (-1)*lucro);
else
printf("Nao houve lucro.\n");
return 0;
}
