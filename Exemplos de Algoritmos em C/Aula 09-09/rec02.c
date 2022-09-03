//Exemplo 1: A função A chama a função B que chama a função C:
#include <stdio.h>
int funcao_C(int c)
{
  return(c/2);
}
int funcao_B(int i)
{
  int k;
  k=funcao_C(i-3);
  return(k);
}
int funcao_A(int n)
{
  int x;
  x=funcao_B(n-1);
  return(x);
}
void main()
{
  printf("resultado: %d\n",
    funcao_A(10));
}
