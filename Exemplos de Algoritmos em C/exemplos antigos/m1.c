#include <stdio.h>
#define LIM 4
int main(){
int mat[LIM][LIM];
int i=0,j=0;
for (i=0; i<LIM; i++) {
for (j=0; j<LIM; j++) {
printf("Digite o valor da posicao (%d,%d): ",i,j);
scanf("%d",&mat[i][j]);
}
}
for (i=0; i<LIM; i++){
for (j=0; j<LIM; j++)
printf("%d ",mat[i][j]);
printf("\n");
}
return 0;
}
