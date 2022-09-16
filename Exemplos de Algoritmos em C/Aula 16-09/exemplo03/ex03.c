/* Grava strings no arquivo */
#include <stdio.h> /* define FILE */
#include <stdlib.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL,"portuguese");
 FILE *fptr;  /* ponteiro para arquivo */

 fptr = fopen("TesteSTR.txt","w");/*Cria p/gravar em modo texto */

 fputs("Um grande antídoto contra o egoísmo\n",fptr);
 fputs("é a generosidade... Dê, mesmo que\n", fptr);
 fputs("isso requeira de você um esforço\n", fptr);
 fputs("consciente. Pelo fato de partilhar\n",fptr);
 fputs("tudo o que possui, seu egoísmo se\n",fptr);
 fputs("abrandará.\n",fptr);
 fclose(fptr);
 system("TYPE TesteSTR.txt");
 system("PAUSE");
 return 0;
}
