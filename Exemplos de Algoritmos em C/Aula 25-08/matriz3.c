#include <stdio.h>
#include <stdlib.h>
#define MAXLIN 3
#define MAXCOL 3
int main ( ){
   int i, j, ma[MAXLIN][MAXCOL],mb[MAXLIN][MAXCOL];
   // Leitura na matriz ma
   printf("primeira matriz\n");
   for (i=0;i<MAXLIN; i++){
        printf("Linha %d \n" , i);
        for (j=0; j<MAXCOL; j++)
  	          scanf("%d", &ma[i][j]);
   }
     // Leitura na matriz mb
   printf("segunda matriz\n");
   for (i=0;i<MAXLIN; i++){
        printf("Linha %d \n" , i);
        for (j=0; j<MAXCOL; j++)
  	          scanf("%d", &mb[i][j]);
   }
   // comparacao entre as matrizes
   for (i=0;i<MAXLIN; i++)
        for (j=0; j<MAXCOL; j++)
  	          if (ma[i][j]==mb[i][j])
                printf("\n%d na posicao %d,%d",ma[i][j],i,j);
   system("pause");
}
