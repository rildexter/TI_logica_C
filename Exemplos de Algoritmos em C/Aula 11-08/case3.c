#include <stdio.h>
int main()
{
  int Mes;
  printf("Digite o Numero do Mes: ");
  scanf("%d", &Mes);
  switch (Mes) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: printf("31 dias\n"); break;
    case 2: printf("28 ou 29 dias\n"); break;
    case 4:
    case 6:
    case 9:
    case 11: printf("30 dias\n"); break;
    default: printf("Mês deve estar entre 1 e 12.\n");
  }
  return 0;
}
