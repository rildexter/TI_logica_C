#include <stdio.h>
const int m = 3; const int n = 4;
main()
{ int i, j, k;
float a[m][n], r[m], c[n];
// Armazenando a produção em a.
for (i=0; i < m; i++)		{  printf("Regiao %d: ", i+1);  for (j=0; j < n; j++)	{
printf("\n Cultura %d: ",j+1);  scanf("%f", &a[i][j]); }  }
// Calculo do total para cada região.
for (i=0; i < m; i++)	{  r[i] = 0.0; // Valor inicial.
// Soma das culturas da região i.
for (k=0; k < n; k++)  r[i] = r[i] + a[i][k];
printf("Regiao %d: %4f\n",i+1,r[i]); }
// Calculo do total para cada cultura.
for (j=0; j < n; j++)
{
c[j] = 0.0; // Valor inicial.
// Soma da regiões da cultura i.
for (k=0; k < m; k++)  c[j] = c[j] + a[k][j];
printf("Cultura %d: %4f\n",j+1,c[j]);
}
}
