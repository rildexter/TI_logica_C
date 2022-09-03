#include<stdio.h>
#include<locale.h>
void funcao_A(){
    int contador, i, vet[3], vetImpar[3];
setlocale(LC_ALL,"Portuguese");
for (i = 0; i < 3; i++)
 {
   printf("\nDigite o número: ");
   scanf("%d", &vet[i]);
   if (vet[i] % 2 != 0)
     {
       vetImpar[contador] = vet[i];
       contador++;
     }
 }
printf("\n\t Os números impares são :\n");
for (i=0; i<contador;i++)
  {
    printf("\t%d",vetImpar[i]);
  }

}
main() {
funcao_A();
return 0;
}
