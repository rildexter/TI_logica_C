#include <stdio.h>
/* declaracao (protótipo) da funcao alo() */
void alo(void);

main()
{
  int i;
  i = 1;
  while (i <= 3)
    {
      alo();
      i += 1;
    }
}
/* definicao da funcao alo() */
void alo(void)
{
   printf("Alo!\n");
}
