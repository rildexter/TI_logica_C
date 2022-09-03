#include <stdio.h>
int fatorial(int K)
{
  if (K==0) return(1);
  return(fatorial(K-1)*K);
}
void main()
{
  int K=7;
  printf("O fatorial de %d e' %d\n", K, fatorial(K));
}
