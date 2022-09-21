#include <stdio.h>
#include <stdlib.h>
int main()
{
 int i,num;
 FILE *arq;
 arq = fopen("MeuPrimeiroArquivo.arq","w");
 for ( i = 0; i < 5 ; i++ )
 {
 printf("Digite um numero:\n");
 scanf("%d",&num);
 fwrite(&num,sizeof(int),1,arq);
 }
 fclose(arq);
 return 0;
}
