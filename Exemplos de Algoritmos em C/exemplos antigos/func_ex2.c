#include <stdlib.h>
#include <stdio.h>
int verifPar(int k){
if(k%2 == 0)
    return 1;
    else
    return 0;
}
int main(){
int num, resultado;
printf("Digite um numero ");
scanf ("%d", &num) ;
resultado = verifPar(num) ;
if(resultado == 1)
    printf ("\n O numero que voce digitou e par\n");
    else
 printf ("\n O numero que voce digitou nao e par\n");
return 0;
}
