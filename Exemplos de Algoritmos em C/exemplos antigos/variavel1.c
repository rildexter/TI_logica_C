#include<stdio.h>
#include<locale.h>
int main() {
int a;
int b;
setlocale(LC_ALL,"Portuguese");

        printf("Digite um número: ");
        scanf("%d", &a);
                printf("Digite um número: ");
        scanf("%d", &b);

                printf("soma: %d\n",a+b);
printf("subtração: %d\n",a-b);
printf("multiplicação: %d\n",a*b);
printf("divisão: %d\n",a/b);
return 0;
}
