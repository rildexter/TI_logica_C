#include <stdio.h>
#include <stdlib.h>
#define MAXLINHAS 3
#define MAXCOLUNAS 3
main ( )
  {
   int amostra[MAXLINHAS][MAXCOLUNAS];
   int i , j , maior;
// Leitura na matriz
   for (i=0;i<MAXLINHAS; i++)
     {
        printf("Linha %d \n" , i + 1);
        for (j=0;j <MAXCOLUNAS;j++)
            do
               {
  	          scanf("%d", &amostra[i] [j]);
                   if (amostra[i] [j] < 1)
  	              printf("Valores positivos > 0!\n");
               }
	    while (amostra[i] [j] < 1);
     }
     //Trecho que acha o maior valor
   maior = amostra[0] [0];
   for (i=0;i<MAXLINHAS; i++)
      for (j=0;j <MAXCOLUNAS;j++)
          if (amostra[i] [j] > maior)
             maior = amostra[i] [j];
   printf("Maior valor da matriz: %d \n" , maior );
   //Impressao da matriz em formato matricial
   printf("\nMatriz em formato matricial\n" );
   for (i=0;i<MAXLINHAS; i++)
     {
         printf("\n");
         for (j=0;j <MAXCOLUNAS;j++)
     	    printf("%8d", amostra[i] [j]);
         printf("\n");
      }
    system("PAUSE");
}
