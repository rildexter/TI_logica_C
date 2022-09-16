#include<stdio.h>

int main() {
FILE *fp;
fp = fopen("prova.txt","w");
if(fp==NULL){
    printf("Problemas na criacao do arquivo \n");
}else printf("arquivo criado");
fclose(fp);
return 0;
}
