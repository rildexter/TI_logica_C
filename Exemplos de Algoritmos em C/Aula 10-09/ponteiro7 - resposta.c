#include<stdio.h>

void main() {
    int x, *p;
    x = 100;
    p = &x; // � necess�rio usar o & para capturar o endere�o de X
    printf("Valor de p: %d.\n", *p);
}
