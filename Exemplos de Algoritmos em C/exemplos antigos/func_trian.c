/* programa que verifica se 3 numeros podem ser os lados de um triangulo reto. */
#include <stdio.h>
int quadrado(int n)
   {
      return n * n;
   }
int main()
{
    int s1, s2, s3;
    printf("Entre tres inteiros: ");
    scanf("%d %d %d", &s1, &s2, &s3);
    if ( s1 > 0 && s2 > 0 && s3 > 0 &&
           (quadrado(s1) + quadrado(s2) == quadrado(s3) ||
            quadrado(s2) + quadrado(s3) == quadrado(s1) ||
            quadrado(s3) + quadrado(s1) == quadrado(s2)) )
      printf(" %d %d %d podem formar um triangulo reto\n", s1, s2, s3);
   else
      printf(" %d %d %d nao podem formar um triangulo reto\n",s1, s2, s3);
}

