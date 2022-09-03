/*04)Criar um algoritmo que leia os elementos
de uma matriz inteira de 3 x 3 e imprimir outra
matriz multiplicando cada elemento da primeira matriz por 2.
Exemplo:
1 2 3     2  4  6
4 5 6     8 10 12
4 1 7     8  2 14 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
main()
{
int lin,col, tab;
int mat[3][3], mat1[3][3];
for (lin=0; lin<3; lin++)
{for (col=0; col<3;col++)
{
printf("linha %d, coluna %d da matriz: ",lin+1,col+1);
scanf("%d", &mat[lin][col]);
}
}//Imprimindo a matriz original
printf("Matriz original\n");
for (lin=0;lin<=2;lin++)
{for (col=0;col<3;col++)
printf("%d\t",mat[lin][col]);
printf("\n\n");
}
// Preenche mat1 com os elementos multiplicados por 2
for (lin=0;lin<=2;lin++)
for (col=0;col<3;col++)
mat1[lin][col] = (mat[lin][col])*2;
// imprime a matriz mat1
printf("\n\nMatriz com elementos multiplicados por 2\n\n");
for (lin=0;lin<=2;lin++)
{
for (col=0;col<3;col++)
printf("%d\t",mat1[lin][col]);
printf("\n\n");
}printf("\n\n");
system("pause");
return 0;
}
