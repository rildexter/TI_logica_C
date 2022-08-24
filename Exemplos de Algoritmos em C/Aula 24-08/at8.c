#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
int vet1[8], x, cont=0, m5=0, NF=0, MN=0;
float soma=0;
for(x=0;x<=7;x++)
{
printf("Informe um numero %d: ", x+1);
scanf("%d",&vet1[x]);
printf("\n");
}
printf("\n\n");
for(x=0;x<=7;x++)
printf("\t%d",vet1[x]);
printf("\n\n");
for(x=0;x<=7;x++)
{
soma=soma+vet1[x];
//multiplos de 5
if(vet1[x]%5==0)
m5++;
//Maior que 10 e maior que 30
if(vet1[x]>10 && vet1[x]<30)
NF++;
//maior valor
if(vet1[x]>MN)
MN=vet1[x];
}
printf(" __________________________________________");
printf("\n| A media do vetor e: %3.2f |",soma/8);
printf("\n| Multiplos de 5: %d |",m5);
printf("\n| Entre 10 e 30: %d |",NF);
printf("\n| Maior numero: %d |",MN);
printf("\n|__________________________________________|");
printf("\n\n");
system("pause");
return(0);
}
