#include <stdio.h>
#include <stdlib.h>
struct Funcionario
{
 char nome[21];
 int matricula;
 float salario;
};
typedef struct Funcionario func;
int main()
{
 int i;
 func registro[3];//func registro[10];
 for ( i = 0 ; i < 3 ; i++ )//for ( i = 0 ; i < 10 ; i++ )
 {
 printf("Digite o nome do funcionario %d:\n",i+1);
 scanf(" %[^\n]s",registro[i].nome);
 printf("Digite a matricula de %s:\n",registro[i].nome);
 scanf(" %d",&registro[i].matricula);
 printf("Digite o salario de %s:\n",registro[i].nome);
 scanf(" %f",&registro[i].salario);
 }
 for ( i = 0 ; i < 3 ; i++ ) // ( i = 0 ; i < 10 ; i++ )
 {
 printf("Funcionario %d\n",i+1);
 printf("Nome: %s\n",registro[i].nome);
 printf("Matricula: %d\n",registro[i].matricula);
 printf("Salario: R$ %.2f\n\n",registro[i].salario);
 }
 return 0;
}
