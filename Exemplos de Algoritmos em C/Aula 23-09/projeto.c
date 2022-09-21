#include <stdio.h>
main(int argc,char *argv[]) {
 FILE *fp;
 char produtos[50];
 if ((fp=fopen ("lista.txt","w")) != NULL) {

fprintf(fp, "----------------\n");
 fprintf(fp, "Lista de Compras:\n");
fprintf(fp, "----------------\n");
printf("Escreva os nome dos produtos da lista:\n ");
 for(int i=0; i<10; i++) {
 printf("Nome do %d Produto:\n ",i+1);
 gets(produtos);
 fprintf(fp, "Produto %d: %s\n", i+1, produtos);
 }
 }
 fclose(fp);
}

