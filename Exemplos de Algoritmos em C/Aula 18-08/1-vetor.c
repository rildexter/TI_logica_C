/*Faça um programa que leia 5 valores inteiros, armazeno-os em
 um vetor, calcule e apresente a soma
destes valores.*/
#include<stdio.h>
int main()
{
 int valor[5], i, soma=0;

 for(i=0; i<5; i++)
 {
 printf("Qual o %do valor?\n ", i+1);
 scanf("%d", &valor[i]);
 soma=soma+valor[i];
 }
 printf("A soma vale: %d", soma);
 getch();
}
