/* Ler um número de 1 a 5 e imprimir o valor por extenso */
#include <stdio.h>
int main()
{
  int Nro;
  printf("Digite um numero entre 1 e 5 : ");
  scanf("%d", &Nro);
  if (Nro == 1)
     printf("Um\n");
  else if (Nro == 2)
          printf("Dois\n");
       else if (Nro == 3)
               printf("Tres\n");
            else if (Nro == 4)
                    printf("Quatro\n");
                 else if (Nro == 5)
                         printf("Cinco\n");
                      else printf("Numero Invalido! \n");
  return 0;
}
