#include<stdio.h>
#include<locale.h>
int main() {
int contador, i, vet[10], vetImpar[10];
setlocale(LC_ALL,"Portuguese");
for (i = 0; i < 10; i++)
 {
   printf("\t Digite o número: ");
   scanf("%d", &vet[i]); /*inserindo os números no vetor*/
if (vet[i] % 2 != 0)  /*se número impar, contador soma mais 1*/
     {
       vetImpar[contador] = vet[i];
       contador++;
     }
 }
printf("\n\t Os números impares são :\n");
for (i=0; i<contador;i++)
  {
    printf("\t%d",vetImpar[i]); /*mostrando os números impares*/
  }
return 0;
}
