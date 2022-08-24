#include <stdio.h>
#include <stdlib.h>
int main( )
{
int i, j, n, id, somaid = 0, idmenor = 0, somapeso;
float mediaalt, somaalt = 0, alt, peso, p;
printf("Informe a quantidade de times que participam do campeonato: ");
scanf("%d", &n);
for (i = 1; i <= n; i++)
{
somaid = 0;
for (j = 1; j <= 3; j++)//diminui aqui para ficar menor o resultado
{
printf("Digite a idade, altura e peso do jogador %d do time %d: ", j, i);
scanf("%d %f %f", &id, &alt, &peso);
somaid = somaid + id;
somaalt = somaalt + alt;
if (peso > 80)
somapeso++;
if (id < 18)
idmenor++;
}
printf("\nA media de idade do time %d eh: %d anos.\n", i, somaid/3);//reduzido tbm
}
mediaalt = somaalt/(n * 3);//reduzido tbm
p = (somapeso/(n * 3)) * 100;//reduzido tbm
printf("\nA media de altura de todos os jogadores do campeonato eh: %.2f.\n", mediaalt);
printf("A quantidade de jogadores do campeonato com menos de 18 anos eh: %d.\n", idmenor);
printf("O percentual de jogadores do campeonato com mais de 80 quilos eh: %.2f.\n", p);
return 0;
}
