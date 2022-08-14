#include <stdio.h>
#include <stdlib.h>
int main()
{
  int x;
  printf("Digite um numero: ");
  scanf("%d", &x);
 /* if (x%2 == 0)
    printf("Par\n");
    else
    printf("Impar\n");*/
  (x%2 == 0) ? printf("Par\n") : printf("Impar\n");
   return 0;

}
