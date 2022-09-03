/*01-Ler um vetor vet de 10 elementos e obter um vetor quadrado cujos componentes deste vetor são
o quadrado dos respectivos componentes de vet.*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
main()
{
system("color E");
setlocale(LC_ALL,"portuguese");
int x,y,tam;
float vet[10], quad[10];
for (x=0; x<=9; x++)
{
printf("Digite o %d° numero : ",x+1);
scanf("%f", &vet[x]);
//quad[x] = pow(vet[x],2);
quad[x] = vet[x]*vet[x];
}
printf("\n\nVetor VET: ");
for (x=0; x<=9;x++)
printf("%4.0f",vet[x]);
printf("\n\n");
printf("Vetor QUAD: ");
for (x=0; x<=9;x++)
printf("%4.0f",quad[x]);
printf("\n\n");
system("pause");
return 0;
}
