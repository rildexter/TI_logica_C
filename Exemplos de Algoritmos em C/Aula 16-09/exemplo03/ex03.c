/* Grava strings no arquivo */
#include <stdio.h> /* define FILE */
#include <stdlib.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL,"portuguese");
 FILE *fptr;  /* ponteiro para arquivo */

 fptr = fopen("TesteSTR.txt","w");/*Cria p/gravar em modo texto */

 fputs("Um grande ant�doto contra o ego�smo\n",fptr);
 fputs("� a generosidade... D�, mesmo que\n", fptr);
 fputs("isso requeira de voc� um esfor�o\n", fptr);
 fputs("consciente. Pelo fato de partilhar\n",fptr);
 fputs("tudo o que possui, seu ego�smo se\n",fptr);
 fputs("abrandar�.\n",fptr);
 fclose(fptr);
 system("TYPE TesteSTR.txt");
 system("PAUSE");
 return 0;
}
