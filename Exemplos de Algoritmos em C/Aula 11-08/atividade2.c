#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num;
    printf("Digite um numero:");
    scanf("%d",&num);

if(num)
    printf("if(num) gera: %d \n", num);


if(num!=0)
    printf("if(num!=0) gera: %d ", num);
    return 0;
}
