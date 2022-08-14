#include <stdio.h>
#include <stdlib.h>
int tam = 5;
// procedimento para imprimir uma matriz
void imprimir(int m[][5]){
    int i, j;
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
}
// função que calcula e retorna a soma de uma linha da matriz
int somarLinha(int x[][5], int l){
    int c, soma = 0;
    for(c = 0; c < tam; c++)
        soma += x[l][c];
    return soma;
}
int main() {
    int mat[5][5];
    int i, j;
    srand(time(NULL));
    // gerando números aleatórios entre 0 e 9 para preencher a matriz
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            mat[i][j] = rand() % 10;
        }
    }
    imprimir(mat);
    // imprime a soma de todas as linhas da matriz
    for(i = 0; i < tam; i++)
        printf("Soma da linha %d: %d\n",i, somarLinha(mat, i));
    return 0;
}
