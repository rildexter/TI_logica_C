#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int aleatorio(int a, int b)
{
return (a + rand()%(b-a+1));
}

int main()
{
int i,n,a,b;  int V[MAX];
printf("Quantos elementos? ");  scanf("%d",&n);
printf("Qual intervalo [a,b]? ");  scanf("%d %d",&a,&b);
for (i = 0; i < n; i++)
V[i] = aleatorio(a,b);  printf("V = [");
for (i = 0; i < n; i++)  printf(" %d",V[i]);
printf("]\n");
return 0;
}
