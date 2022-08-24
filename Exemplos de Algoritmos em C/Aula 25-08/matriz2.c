#include <stdio.h>
#include <stdlib.h>
#define MAXLIN 3
#define MAXCOL 3
int main ( ){
   int ma[MAXLIN][MAXCOL],mb[MAXLIN][MAXCOL],total[11];
   int i , j, noves=0 ;
// leitura na matriz
    printf("Digite as notas \n");
   for (i=0;i<MAXLIN; i++){
        printf("Linha %d \n" , i);
        for (j=0; j<MAXCOL; j++)
  	          do {
                   scanf("%d", &ma[i][j]);
                   if (ma[i][j]<0 || ma[i][j]>10)
                       printf("numero invalido\n");
             } while (ma[i][j]<0 || ma[i][j]>10);
   }
// contagem de notas nove
   for (i=0;i<MAXLIN; i++)
        for (j=0; j<MAXCOL; j++)
  	          if (ma[i][j]==9) noves=noves+1;
   printf("\naparecem %d notas nove\n\n\n",noves);

// contagem de todas as notas
   for (i=0;i<11;i++)
        total[i]=0;    // inicializa com zero os totais
   for (i=0;i<MAXLIN; i++)
        for (j=0; j<MAXCOL; j++)
  	          total[ma[i][j]] = total[ma[i][j]] + 1;
   for (i=0;i<11;i++)
         printf("\nnota %d: %d\n",i,total[i]);
   system("pause");
}
