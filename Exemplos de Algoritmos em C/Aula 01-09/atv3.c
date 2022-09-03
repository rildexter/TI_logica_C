/*3)Criar um algoritmo que leia os elementos de
uma matriz inteira de 3 x 3 e imprimir todos os
elementos, exceto os elementos da diagonal principal.*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
main()
{
int lin,col, tab;
int mat[3][3];
for (lin=0; lin<3; lin++)
{
for (col=0; col<3;col++)
{
printf("Digite ELEMENTO da linha %d, coluna %d da matriz: ",lin+1,col+1);
// aqui no scanf preenchemos a matriz
scanf("%d", &mat[lin][col]);
}}//Imprimindo a matriz
printf("Matriz\n");
for (lin=0;lin<=2;lin++)
{
for (col=0;col<3;col++)
printf("%d\t",mat[lin][col]);
printf("\n\n");
}// Imprimindo a matriz menos diagonal principal
printf("\n\nMatriz menos a diagonal principal\n\n");
for (lin=0; lin<3;lin++)
{
for (col=0;col<3;col++)
{
if (lin != col)
printf("%d",mat[lin][col]);
printf("\t");
}
printf("\n");
}
printf("\n\n");
system("pause");
return 0;
}
