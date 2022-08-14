/* Faça um programa que leia 10 números inteiros, armazene-os em um vetor, solicite um valor de
referência inteiro e:
a) imprima os números do vetor que são maiores que o valor referência
b) retorne quantos números armazenados no vetor são menores que o valor de referência
c) retorne quantas vezes o valor de referência aparece no vetor */
#include<stdio.h>
int main()
{
 int valor[10], i, refe, conta=0, menores=0, iguais=0;
 for(i=0; i<10; i++)
 {
 printf("Qual o %do valor?\n ", i+1);
 scanf("%d", &valor[i]);
 }
 printf("\nEntre com o valor de referencia:\n");
 scanf("%d", &refe);
 for(i=0; i<10; i++)
 if(valor[i]>refe)
 conta++;
    else
 if(valor[i]<refe)
 menores++;
    else
 iguais++;

 if(refe>0)
 {
 printf("\nOs valores maiores que a referencia sao:\n");
  for(i=0; i<10; i++)
 if(valor[i]>refe)
 printf("%d\n", valor[i]);
 }
    else
 printf("\nNao existem valores maiores que a referencia\n");

 if(menores>0)
 printf("\nExistem %d valores menores que a referencia\n", menores);
    else
 printf("\nNao existem valores menores que a referencia\n");

 if(iguais>0)
 printf("\nExistem %d valores iguais ao da referencia\n", iguais);
    else
 printf("\nNao existem valores iguais ao da referencia\n");
 getch();
}
