#include <stdio.h>
StrLen (char *str)
{
int tamanho = 0;
while (*str)
{
  tamanho++;
  str++;
}
return tamanho;
}
main ()
{
int t;
char str1[100];
printf ("\n\nEntre com uma string: \n");
gets (str1);
t = StrLen(str1);
printf ("\n Voce digitou \n%s\ncom %d letras.",str1,t);
}
