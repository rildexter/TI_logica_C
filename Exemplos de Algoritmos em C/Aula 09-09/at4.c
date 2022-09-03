#include<stdio.h>
#include<locale.h>
void func_A(){
printf("Capitulo 01\n");
}
void func_B(){
printf("Capitulo 02\n");
}
void func_C(){
printf("Capitulo 03\n");
}
void func_D(){
func_A();
func_B();
func_C();
}
void main() {
 int resp=1;
setlocale(LC_ALL,"portuguese");
while(resp==1 || resp==2 || resp==3 || resp==4){
printf("Digite: 1 ou 2 ou 3 ou 4 :\n ");
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
   case 4:
     func_D();
   break;
   default:
      printf("Programa encerrado!\n");
}}}
