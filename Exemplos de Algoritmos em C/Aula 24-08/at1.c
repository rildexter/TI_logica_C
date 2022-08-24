#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
int x, vet[8], num, achei=0;
for(int x=0;x<8;x++)
{
printf("\n[%d] Digite um numero: ",x);
scanf("%d",&vet[x]);
}
printf("\n\n");
printf("Digite um valor a ser pesquisado: ");
scanf("%d",&num);
for(int x=0;x<8;x++)
if(vet[x]==num)
{
printf("\n O numero %d esta na posicao %d: ",num,x);
printf("\n O numero %d foi o numero %d a ser digitado: ",num,(x+1));
achei=1;
}
if(achei!=1)
printf("\n Este numero nao existe");
printf("\n\n");
system("pause");
return(0);
}
