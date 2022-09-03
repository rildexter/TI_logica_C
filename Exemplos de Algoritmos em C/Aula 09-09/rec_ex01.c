#include<stdio.h>
#include <locale.h>
void main() {
 int resp;
setlocale(LC_ALL,"portuguese");
printf("Digite \n 1 para manhã \n 2 para tarde \n 3 para noite :\n ");
scanf("%d",&resp);
 switch (resp)
{
   case 1:
   printf("Bom dia!\n ");
   break;
   case 2:
    printf("Boa tarde! ");
   break;
   case 3:
     printf("Boa noite!\n ");
   break;
   default:
      printf("Você selecionou uma opção válida");
}}
