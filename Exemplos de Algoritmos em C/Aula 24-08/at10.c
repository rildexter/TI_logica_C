#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
main()
{
char n[3][30], conte=0,conta=0, tam=0;
int x, m;
for(x=0;x<3;x++)
{
printf("Informe nome %d: ", x+1);
gets(n[x]);
printf("\n");
}
for(x=0;x<3;x++)
{
tam=strlen(n[x]);
for(m=0; m<=tam-1 ;m++)
{
if(n[x][m]=='A'||n[x][m]=='a')
conta++;
if(n[x][m]=='E'||n[x][m]=='e')
conte++;
}
}
printf("\n _________________________________________");
printf("\n| Ha %d letras A, %d letras E |",conta,conte);
printf("\n|_________________________________________|");
printf("\n\n");
system("pause");
return(0);
}
