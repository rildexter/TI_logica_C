#include <stdio.h>
#include <stdlib.h>
int main( )
{
int i, n;
float nota, max = -1, min = 11, soma = 0;
do{
printf("Digite o numero de alunos da turma(maior ou igual a 1): ");
scanf("%d", &n);
}while(n < 1);
for (i = 1; i <= n; i++)
{
do{
printf("Digite a nota do aluno %d: ", i);
scanf("%f", &nota);
}while(nota < 0 || nota > 10);
if (i == 1)
{
max = nota;
min = nota;
}
if (nota > max)
max = nota;
if (nota < min)
min = nota;
soma = soma + nota;
}
soma = soma / n;
printf("O valor da media da turma eh: %.2f\n", soma);
printf("O valor da maior nota eh: %.2f\n", max);
printf("O valor da menor nota eh: %.2f\n", min);
return 0;
}
