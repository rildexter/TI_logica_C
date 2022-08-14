#include <stdio.h>

int main()
{
        int operacao;
        float num1,
              num2;

        //printf("Escolha sua operação [+ - * / ]: ");
       // scanf("%c",&operacao);

        printf("Entre com o primeiro número: ");
        scanf("%f",&num1);

                printf("Escolha sua operação 1-soma\n2-subtracao\n3-multiplicacao\n4-divisao: ");
        scanf("%d",&operacao);


        printf("Entre com o segundo número: ");
        scanf("%f",&num2);


        switch( operacao )
        {
            case 1:
                printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
                break;

            case 2:
                printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
                break;

            case 3:
                printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
                break;

            case 4:
                printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
                break;

            default:
                printf("Você digitou uma operacao invalida.");


}
}
