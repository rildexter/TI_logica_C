#include <stdio.h>
#include <stdlib.h>
main() {
    int i, contador = 0, troca, copia, vetor[8]= {38,97,19,62,23,47,41,8};
    srand(time(NULL));
    // imprime o vetor antes da ordenação
    printf("Antes da ordenacao:\n");
    for(i = 0; i < 8; i++){
        printf("%3d ", vetor[i]);
    }
    // ordena o vetor
    do{ // executa enquanto foi feito ao menos uma troca
        troca = 0;
        contador++; // conta a quantidade de vezes que este trecho foi executado
        for(i = 0; i < 8; i++){ // percorre todo o vetor comparando o elemento i com o i+1
            if(vetor[i] > vetor[i+1]){ // se o elemento i for maior que o i+1, troca
                copia = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = copia;
                troca = 1;
            }
        }
    }while(troca);
    // imprime o vetor após a ordenação
    printf("\nApos a ordenacao: Contador: %d\n", contador);
    for(i = 0; i < 8; i++){
        printf("%3d ", vetor[i]);
    }
    printf("\n ");
    return 0;
}
