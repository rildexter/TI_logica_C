#include <stdio.h>
void cumprimenta(char, char);
int main()
{
  char primeiro, segundo;

  printf("Entre com duas iniciais (sem separacao): ");
  primeiro = getchar();
  segundo = getchar();
  cumprimenta(primeiro, segundo);
}
void cumprimenta(char inic1, char inic2)
{
    printf("Ola, %c%c!\n",inic1,inic2);
}
