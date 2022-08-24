#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
int vet[10],x, y=0;
// preechimento do vetor vet
for(x=0;x<=9;x++)
{
vet[x]=y+2;
y=y+2;
}
//exibindo o vetor vet, por isso repete o for.
for(x=0;x<=9;x++)
//exibindo os valores pares 2,4,6,8,10,12,14,16,18,20.
printf(" %d ",vet[x]);
printf("\n\n");
system("pause");
return(0);
}
