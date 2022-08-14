#include <stdio.h>
void soma(int a, int b){
printf("%d + %d = %d \n",a,b,a+b);
}
void subtracao(int a, int b){
printf("%d - %d = %d \n",a,b,a-b);
}
int main()
{

 int num1,num2;
  printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
   printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    soma(num1,num2);
    subtracao(num1,num2);
}

