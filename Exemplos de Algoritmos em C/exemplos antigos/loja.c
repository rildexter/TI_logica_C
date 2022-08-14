#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 2000
int aleatorio(int a, int b){
return (a + rand()%(b-a+1));
}
int main(){
int i,n,p;
int vmais,vmenos,pmais = 0,pmenos = 0,compra[MAX];
float total = 0,media;
float preco[] = {72,15,25,32,98,45,22,80,63,45,15,21,95,40,50};
float venda[15] = {0.0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
srand((unsigned)time(NULL));  n = aleatorio(1000,2000);
for (i = 0; i < n; i++){
p = aleatorio(0,14);  compra[i] = p;  venda[p]++;
}
vmais = -1;  vmenos = n+1;
for (i = 0; i < n; i++){
p = compra[i];
total = total + preco[p];
if (venda[p] > vmais){
vmais = venda[p];
pmais = p;
}
if (venda[p] < vmenos)
{
vmenos = venda[p];  pmenos = p;
}}
media = total/n;
printf("Numero de clientes: %d\n",n);  printf("Valor total das vendas: %.2f\n",total);
printf("Mais vendido: %d - Preco = %.2f\n",pmais,preco[pmais]);
printf("Menos vendido: %d - Preco = %.2f\n",pmenos,preco[pmenos]);
printf("Valor medio das vendas: %.2f\n",media);
return 0;
}
