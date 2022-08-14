#include <stdio.h>
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
void alo(void)
{
   printf("Alo!\n");
}
