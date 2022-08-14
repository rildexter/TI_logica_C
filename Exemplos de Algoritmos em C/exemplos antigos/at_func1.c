#include <stdio.h>
int imprime(int DIM)
{
    int linha, coluna;
    int matriz[DIM][DIM];
    //escrevendo na Matriz
    for(linha = 0 ; linha < DIM ; linha++)
        for(coluna = 0 ; coluna < DIM ; coluna++)
        {
            matriz[linha][coluna]= 1,1;
        }
    // imprimindo a matriz na tela
    for(linha = 0 ; linha < DIM ; linha++)
    {
        for(coluna = 0 ; coluna < DIM ; coluna++)
            printf("%3d", matriz[linha][coluna]);
        printf("\n");
    }
}
 main(){
    int a;
                printf("Tamanho da matriz: ");
                scanf("%d", &a);
    imprime(a);
return 0;
}
