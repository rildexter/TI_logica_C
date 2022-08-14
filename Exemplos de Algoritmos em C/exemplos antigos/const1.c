#include <stdio.h>
#include <stdlib.h>
#define MAX 30
main()
{
int i,N,M,P,v[MAX];
printf("Valor de N: ");  scanf("%d",&N);
for (i = 0; i < N; i++)
{
printf("Valor de v[%d]: ",i);
scanf("%d",&v[i]);
}
M = v[0];  P = 0;
for (i = 0; i < N; i++)
{
if (v[i] > M)
{
M = v[i];  P = i;
}
}
printf("Maior = %d, Posicao = %d\n",M,P);
return 0;
}
