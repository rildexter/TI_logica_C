#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 7
int main() {
    int vet[TAM], i, acimaMedia = 0, soma = 0;
    float media;
    srand(time(NULL)); //planta uma nova semente
    //gera valores aleatorio para o vetor
    for (i = 0; i < TAM; i++) {
        vet[i] = rand()%51;
    }
    //determina a media
    for (i = 0; i < TAM; i++) {
        soma = soma + vet[i];
    }
    media = soma / (float)TAM;
    //determina quantos valores estao acima da media
    for (i = 0; i < TAM; i++) {
        if (vet[i] > media) {
            acimaMedia++;
        }
    }
    //mostrar valores do vetor
    printf("Vetor: ");
    for (i = 0; i < TAM; i++) {
        printf("%i ", vet[i]);
    }
    printf("\nMedia: %f", media);
    printf("\nAcima da media: %i", acimaMedia);
    return 0;
}
