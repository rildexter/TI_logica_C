#include<stdio.h>
#include<locale.h>
int main() {
int contador, i, vet[10], vetImpar[10];
setlocale(LC_ALL,"Portuguese");
for (i = 0; i < 10; i++)
 {
   printf("\t Digite o n�mero: ");
   scanf("%d", &vet[i]); /*inserindo os n�meros no vetor*/
if (vet[i] % 2 != 0)  /*se n�mero impar, contador soma mais 1*/
     {
       vetImpar[contador] = vet[i];
       contador++;
     }
 }
printf("\n\t Os n�meros impares s�o :\n");
for (i=0; i<contador;i++)
  {
    printf("\t%d",vetImpar[i]); /*mostrando os n�meros impares*/
  }
return 0;
}
