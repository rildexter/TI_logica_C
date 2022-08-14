#include <stdio.h>
#include <stdlib.h>
main() {
int i, lista[5];

//lendo os valores
for (i=0; i<5; i++) {
printf("Informe um numero: \n");
scanf("%d", &lista[i]);
}
//inicializando o maior valor
int maior = lista[0];
//encontrando o maior valor
for (i=1; i<5; i++) {
if (maior < lista[i])
maior = lista[i];
 }
printf("Maior = %d \n", maior);
}
