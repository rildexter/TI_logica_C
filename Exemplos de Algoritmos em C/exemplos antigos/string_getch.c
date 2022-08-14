#include<stdio.h>
#include<locale.h>
main(void)
{
  char nome[61];
  setlocale(LC_ALL,"portuguese");

  printf("Digite seu nome: ");
  gets(nome);
  printf("O nome armazenado foi: %s\n", nome);

  printf("Uma posição: %c\n", nome[3]);
    system("Pause");
  return 0;
}
