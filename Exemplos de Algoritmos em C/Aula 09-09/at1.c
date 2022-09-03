#include <stdio.h>
#include <locale.h>
void func_A(){
printf("Bom dia!\n ");
}
void func_B(){
printf("Meu nome é ");
}
void func_C(){
printf("Algoritmo!\n ");
}

void main(){
setlocale(LC_ALL,"portuguese");
func_A();
func_B();
func_C();
}
