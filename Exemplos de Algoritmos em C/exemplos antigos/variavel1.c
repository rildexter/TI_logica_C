#include<stdio.h>
#include<locale.h>
int main() {
int a;
int b;
setlocale(LC_ALL,"Portuguese");

        printf("Digite um n�mero: ");
        scanf("%d", &a);
                printf("Digite um n�mero: ");
        scanf("%d", &b);

                printf("soma: %d\n",a+b);
printf("subtra��o: %d\n",a-b);
printf("multiplica��o: %d\n",a*b);
printf("divis�o: %d\n",a/b);
return 0;
}
