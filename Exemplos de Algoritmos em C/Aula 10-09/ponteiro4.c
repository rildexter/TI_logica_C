#include <stdio.h>
#include <string.h>

StrCat (char *primeira, char *segunda)
{
char *p;

/* --->p aponta para o final da primeira string */
p = primeira+strlen(primeira);
while (*segunda)
{
  *p = *segunda;
  p++;
  segunda++;
}
*p = '\0';
}

int main ()
{
    char str1[100], str2[1003], str3[200];
    printf ("\n\nEntre com uma string: \n");
    gets (str1);
    printf ("\n\nEntre com uma string: \n");
    gets (str2);
    str3[0] = '\0';
    StrCat(str3, str1);
    StrCat(str3, str2);
    printf ("\n Voce digitou \n%s",str3);
          return(0);
}
