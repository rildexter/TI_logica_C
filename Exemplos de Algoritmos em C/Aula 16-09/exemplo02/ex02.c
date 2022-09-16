/*
        Modos de abertura de arquivos:
        w -> Escrita
        r -> leitura
        a -> anexar
        r+ -> leitura e escrita
        w+ -> leitura e escrita (apaga o conteúdo caso o arquivo exista)
        a+ -> leitura e escrita (adiciona ao final do arquivo)
*/

#include <stdio.h>
#include <stdlib.h>
void escrever(char f[]) {
    FILE *file = fopen(f, "w");
    char letra;

    if(file) {
        printf("\nDigite um texto e pressione ENTER ao finalizar!\n");
        scanf("%c", &letra);
        while(letra != '\n') {
            fputc(letra, file);
            scanf("%c", &letra);
        }
        fclose(file);
    } else
        printf("\nERRO ao abrir arquivo!\n");
}
void ler(char f[]) {
    FILE *file = fopen(f, "r");
    char letra;

    if(file){
        printf("\n\tTexto lido do arquivo:\n");
        while(!feof(file)) {
            letra = fgetc(file);
            printf("%c", letra);
        }

        fclose(file);
    }
    else
        printf("\nERRO ao abrir arquivo!\n");
}
int main() {

    char nome[] = {"conto.txt"};

    escrever(nome);
    ler(nome);

    return 0;
}
