#include <stdio.h>
#include <stdlib.h>

struct pessoa {
char nome[30];
int idade;
char endereco[50];
};

 void main()
 {
 struct pessoa p;
 printf("Informe o nome: \n");
 scanf("%s", &p.nome);
 printf("Informe a idade: \n");
 scanf("%d", &p.idade);
 printf("Informe o endereco:\n");
 scanf("%s", &p.endereco);

 //imprimindo dados
 printf("\n\nNome: %s \n", p.nome);
 printf("Idade: %d \n", p.idade);
 printf("Endereco: %s \n", p.endereco);
 }
