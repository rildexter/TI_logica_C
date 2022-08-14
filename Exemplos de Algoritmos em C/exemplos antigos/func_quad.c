#include <stdio.h>
#include <math.h>

int main ()
{
    float num;
printf("Digite um numero: ");
scanf ("%f", &num) ;
printf("\nPara a raiz de %.1f \ntemos:%.1f\n",num, sqrt(num) );

   return(0);
}
