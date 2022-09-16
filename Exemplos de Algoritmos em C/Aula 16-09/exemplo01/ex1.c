#include <stdio.h>
main(int argc,char *argv[]) {
 FILE *fp;
 char nome[50];
 if ((fp=fopen ("nomes.txt","w")) != NULL) {
 for(int i=0; i<10; i++) {
 printf("Escreva um nome: ");
 gets(nome);
 fprintf(fp, "Nome %d: %s\n", i+1, nome);
 }
 }
 fclose(fp);
}
