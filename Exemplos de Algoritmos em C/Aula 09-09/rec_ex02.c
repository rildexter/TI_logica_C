#include<stdio.h>
#include <locale.h>
void func_A(){
printf("Bom dia!\n ");
}
void func_B(){
printf("Boa tarde! ");
}
void func_C(){
printf("Boa noite!\n ");
}
int main() {
 int resp;
setlocale(LC_ALL,"portuguese");
printf("Digite \n 1 para manhã \n 2 para tarde \n 3 para noite :\n ");
scanf("%d",&resp);
 switch (resp)
{
   case 1:
     func_A();
   break;
   case 2:
     func_B();
   break;
   case 3:
     func_C();
   break;
   default:
      printf("Você selecionou uma opção válida");
}

}
