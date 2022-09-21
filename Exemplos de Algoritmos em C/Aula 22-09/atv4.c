#include <stdio.h>
#include <stdlib.h>
struct aluno
{
 int cpf;
 char nome[21];
 float notas[3];
};
typedef struct aluno AL;
int main()
{
 int i,j;
 float media[3], soma ;
 AL estudante[3];
 for ( i = 0 ; i < 3 ; i++ )
 {
 printf("Digite o nome do aluno %d:\n",i+1);
 scanf(" %[^\n]s",estudante[i].nome);
 printf("Digite o cpf de %s:\n",estudante[i].nome);
 scanf("%d",&estudante[i].cpf);
 soma = 0 ;
 for ( j = 0 ; j < 3 ; j++ )
 {
 printf("Digite a nota %d de %s\n",j+1,estudante[i].nome);
 scanf("%f",&estudante[i].notas[j]);
 soma = soma + estudante[i].notas[j];
 }
 media[i] = soma/3;
 }
 for ( i = 0 ; i < 3 ; i++ )
 {
 printf("Aluno %d:\n%s\nCPF: %d\nMedia:%.1f\n\n",i+1,estudante[i].nome,estudante[i].cpf,media[i]);
 }
 return 0 ;
}
