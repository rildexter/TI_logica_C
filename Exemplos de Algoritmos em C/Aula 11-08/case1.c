/* Ler um número de 1 a 5 e imprimir
 o valor por extenso */
#include <stdio.h>
int main()
{
  int Nro;
  printf("Digite um numero entre 1 e 5 : ");
  scanf("%d", &Nro);
  switch (Nro)
  {
    case 1 : printf("Um\n"); break;
    case 2 : printf("Dois\n"); break;
    case 3 : printf("Tres\n"); break;
    case 4 : printf("Quatro\n"); break;
    case 5 : printf("Cinco\n"); break;
    default: printf("Numero Invalido!\n");
  }
  return 0;
}
