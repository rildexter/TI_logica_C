#include <stdio.h>
#include <string.h>
strend (char *str, char *t)
{
    char *p;
    p = str + strlen(str) - strlen(t); /* p aponta para o final da string str - tamanho de t */
    while (*t)
    {
      if (*p != *t) return 0;
      p++;
      t++;
    }
    return 1;
}
int main ()
{
    char str[100], t[20];
    printf ("\n\nEntre com uma string: \n");
    gets (str);
    printf ("\n\nEntre com a expressao de teste:\n");
    gets (t);
    if (strend(str, t))
      printf ("\n A expressao ocorre no final da frase.\n");
      else printf ("\n A expressao NAO ocorre no final da frase.\n");
          return(0);
}
