#include <stdio.h>
#include <stdlib.h>
struct Endereco
{
 char rua[41],bairro[21];
 int numero;
};
struct Funcionario
{
 char nome[21];
 int matricula;
 struct Endereco ende;
};
typedef struct Funcionario func;
int main()
{
 func empregado;
 printf("Digite o nome do funcionario:\n");
 scanf(" %[^\n]s",empregado.nome);
 printf("Digite a matricula de %s:\n",empregado.nome);
 scanf("%d",&empregado.matricula);
 printf("Digite a rua de %s:\n",empregado.nome);
 scanf(" %[^\n]s",empregado.ende.rua);
 printf("Digite o numero de %s:\n",empregado.nome);
 scanf("%d",&empregado.ende.numero);
 printf("Digite o bairro de %s:\n",empregado.nome);
 scanf(" %[^\n]s",empregado.ende.bairro);
 printf("Dados do funcionario:\n");
 printf("Nome: %s\nMatricula:%d\n",empregado.nome,empregado.matricula);
 printf("Rua: %s\nNumero: %d\nBairro:%s\n",empregado.ende.rua,empregado.ende.numero,empregado.ende.bairro);
 return 0 ;
}
