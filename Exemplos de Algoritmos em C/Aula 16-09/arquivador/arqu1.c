#include<stdio.h>

int main() {

char str[20] = "Hello word!";
int result;
FILE *arq;
arq = fopen("ArqGrav.txt","w");
if(arq==NULL){
printf("Problemas na criacao do arquivo \n");
system("pause");
exit(1);
}
result = fputs(str,arq);
if(result == EOF)
printf("Erro na Gravacao \n");
fclose(arq);
return 0;
}
