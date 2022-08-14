#include <stdio.h>
#include <stdlib.h>

int main(){
int soma, quantidade, idade;
float media;
soma = 0;
quantidade = 0;
idade = 0;
int contador;
for (contador = 0; contador < 5; contador = contador+1)
{
    printf("Idade da pessoa %d\n",quantidade+1);
    scanf("%d", &idade);
   if (idade >=0)
   {
     soma = soma + idade;
     quantidade = quantidade + 1;
   }
}
// Faz o calculo da media de idade
if (quantidade >0)
{
   media = (float) soma / quantidade;
   printf("A media de idade das %d pessoas eh: %5.2f", quantidade,
            media);
}
else printf("Nenhum dado foi informado.");
}
