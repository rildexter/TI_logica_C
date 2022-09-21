#include<stdio.h>
#include<stdlib.h>
void main()
{
int n, quantidade, dia, mes, ano;
float preco, total;
do{
printf("Digite o numero do pedido:\n");
scanf("%d", &n);
if(n == 0)
break;
printf("Digite a data do pedido<dia/mes/ano>:\n");
scanf("%d%d%d", &dia, &mes, &ano);
printf("Digite o preco unitario:\n");
scanf("\n%f", &preco);
printf("Digite a quantidade:\n");
scanf("\n%d", &quantidade);
total= preco * quantidade;
printf("Custo:%.2f\n", total);
}while(n != 0);
}
