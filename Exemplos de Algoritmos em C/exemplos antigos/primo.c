#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, nMax, i, j, totalDivisores;
    // Recebe o limite para exibi��o dos n�meros primos
    printf("Digite o limite superior para os numeros primos(Minimo 2): ");
    scanf("%d", &nMax);
    // Verifica se o limite superior � um n�mero v�lido
    // O menor n�mero primo � 2
    while(nMax < 2) {
        system("cls");
        printf("Digite o limite superior para os numeros primos(Minimo 2): ");
        scanf("%d", &nMax);
    }
    // Verifica se o n�mero � primo e imprime o valor na tela
    for(i = 0; i <= nMax; i++) {
        totalDivisores = 0;
        // Conta os divisores para verificar se o valor � primo
        for(j = 1; j <= i; j++) {
            if(i % j == 0) {
                totalDivisores++;
            }
        }
        // Se o total de divisores � dois, imprime o primo com formata��o de 4 casas
        if(totalDivisores == 2) {
            printf("%4d ", i);
        }
    }
     printf("\n");
    system("pause");
    return 0;
}
