#include <stdio.h>
#include <stdlib.h>
#define MAXLIN 4
#define MAXCOL 4
int main ( ){
   int i, j, k,l,ok,A[MAXLIN][MAXCOL],B[MAXLIN][MAXCOL];
   // Leitura na matriz A
   printf("primeira matriz\n");
   for (i=0;i<MAXLIN; i++){
        printf("Linha %d \n" , i);
        for (j=0; j<MAXCOL; j++)
  	          scanf("%d", &A[i][j]);
   }
     // Leitura na matriz B
   printf("segunda matriz\n");
   for (i=0;i<MAXLIN; i++){
        printf("Linha %d \n" , i);
        for (j=0; j<MAXCOL; j++)
  	          scanf("%d", &B[i][j]);
   }
  // comparacao entre as matrizes
   for (i=0;i<MAXLIN; i++)
        for (j=0; j<MAXCOL; j++){
            ok=0;
  	    for (k=0;k<MAXLIN; k++){
                if (ok==1) break;
                for (l=0; l<MAXCOL; l++)
                     if (A[i][j]==B[k][l]){
                        printf("\n%d aparece nas duas matrizes",A[i][j]);
                        ok=1;
                        break;
                     }
                }
        }
   system("pause");
}
