//Escreva uma fun��o que, dado um n�mero real passado como par�metro,
// retorne a parte inteira e a parte fracion�ria desse n�mero
#include <stdio.h>
#include <stdlib.h>

void separa(float num, int *x, float *y) {
    *x = (int)num;
    *y = num - *x;
}

int main()
{
    float num, frac;
    int inteira;
    printf("Digite um numero real fracionado: ");
    scanf("%f", &num);
//chmada da funcao
    separa(num, &inteira, &frac);

    printf("Digitado foi: %2.2f:\n", num);
    printf("A parte inteira %i \n e a parte fracionada: %.2f \n",inteira, frac);
    return 0;
}
