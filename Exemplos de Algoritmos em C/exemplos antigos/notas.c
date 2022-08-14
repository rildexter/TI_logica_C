#include <stdio.h>
int main ()
{
//declarando um vetor com tamanho 3 e uma variavel soma
int vetIdades[3], soma;
//atribuindo valores com scanf
printf("Informe a primeira idade: \n");
scanf("%d", &vetIdades[0]);
printf("Informe a segunda idade: \n");
scanf("%d", &vetIdades[1]);
printf("Informe a terceira idade: \n");
scanf("%d", &vetIdades[2]);

soma = vetIdades[0] + vetIdades[1] + vetIdades[2];

printf("Idades: %d \t %d \t %d \n", vetIdades[0], vetIdades[1], vetIdades[2]);
printf("A soma das idades e: %d \n", soma);
}
