#include<stdio.h>
#include<stdlib.h>
void main()
{
int idade, pessoaMenor21=0, pessoaMaior50=0;
do{
printf("Digite uma idade:");
scanf("%d", &idade);
if(idade >= 1) {
if(idade < 21)
pessoaMenor21++;
else if(idade > 50)
pessoaMaior50++;
}
}while(idade != 0);
printf("\nPessoas menores de 21 anos:%d", pessoaMenor21);
printf("\nPessoas maiores de 50 anos:%d", pessoaMaior50);
}
