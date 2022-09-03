#include<stdio.h>
#include<locale.h>
void func_A(){
system("color E");
}
void func_B(){
system("color A");
}
void func_C(){
system("color C");
}
void main() {
 int resp=1;
setlocale(LC_ALL,"portuguese");
while(resp==1 || resp==2 || resp==3){
printf("Digite \n 1 para Amarelo \n 2 para Verde \n 3 para Vermelho :\n ");
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
      printf("Programa encerrado!\n");
}}}
