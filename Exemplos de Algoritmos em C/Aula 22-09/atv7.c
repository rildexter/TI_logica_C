#include <stdio.h>
#include <stdlib.h>
int main()
{
 int i,num,x[5];
 FILE *arq;
 arq = fopen("MeuPrimeiroArquivo.arq","r");
 for ( i = 0; i < 5 ; i++ )
 {
 fread(&num,sizeof(int),1,arq);
 x[i] = 2*num;
 }
 fclose(arq);
 arq = fopen("MeuPrimeiroArquivo.arq","w");
 for ( i = 0; i < 5 ; i++ )
 {
 num = 2*x[i];
 fwrite(&num,sizeof(int),1,arq);
 }
 fclose(arq);
 arq = fopen("MeuPrimeiroArquivo.arq","r");
 for ( i = 0; i < 5 ; i++ )
 {
 fread(&num,sizeof(int),1,arq);
 printf("%d ",num);
 }
 fclose(arq);
 return 0;
}
