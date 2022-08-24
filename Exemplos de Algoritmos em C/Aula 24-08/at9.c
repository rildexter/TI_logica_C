#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
main()
{
int x, m;
char nome[3][30],conta=0, conte=0, tam=0;
for(x=0;x<3;x++)
{
printf("\tDigite um nome: ");
gets(nome[x]);
}
for(x=0;x<3;x++)
{
tam=strlen(nome[x]);
for(m=0;m<=tam-1;m++)
{
if(nome[x][m]=='A'||nome[x][m]=='a')
conta++;
if(nome[x][m]=='E' || nome[x][m]=='e')
conte++;
}
}
printf("Nos nomes digitados tem %d letras A",conta);
printf("\nNos nomes digitados tem %d letras E",conte);
printf("\n\n");
system("pause");
return(0);
}
