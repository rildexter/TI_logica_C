#include <stdio.h>
// Supondo uma classe com 10 alunos.
const int m = 4;
main()
{
int i, j, k;
float soma;
float a[m][4], r[m], p[4] = {1,2,1,2};
// Armazenando as notas.
for (i=0; i < m; i++)
{
printf("Aluno %d: ", i+1);
for (j=0; j < 4; j++)
{
printf("\n Nota %d: ",j+1);
scanf("%f", &a[i][j]);
}
}
// Calculo da media e resultado em r.
for (i=0; i < m; i++)
{
soma = 0.0;
// Media do aluno i: armazenar a
// soma das k notas vezes k pesos.
for (k=0; k < 4; k++)
soma = soma + a[i][k]*p[k];
// Calculo da media do aluno i.
r[i] = soma/6;
} // Mostrando a media de cada aluno.
printf(" Aluno Media \n");
for (i=0; i < m; i++)
printf(" %4d %4.2f \n",i+1,r[i]);
}
