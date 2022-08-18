#include<stdio.h>
#include<locale.h>
int main() {
float temp[10];
int contador;
setlocale(LC_ALL,"Portuguese");

printf("digite os valores da temp em graus Farenheit : \n");
for(contador=1;contador<=10;contador++)
  {
    scanf("%f",&temp[contador]); /*Recebendo os valores das temperaturas*/
}
for(contador=1;contador<=10;contador++)
  {
     printf("\n\t Temp [%d] em Graus Celsius = %.1f",contador,(0.55555*(temp[contador]-32)));
  }
return 0;
}
