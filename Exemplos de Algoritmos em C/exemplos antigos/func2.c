#include <stdio.h>
int funcao_quadrado ()
{
 int num;
 printf ("Informe o numero desejado.");
 scanf ("%d", &num);
 return num*num;
}

int main ()
{
 int resultado;
 resultado = funcao_quadrado();
printf ("O quadrado do numero digitado foi: %d", resultado);
 return 0;
}
