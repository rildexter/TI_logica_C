#include <stdio.h>
const int n = 10;
main()
{
int i, j, a[n][n];
// Inicializando os elementos de a.
// Passos 1 e 2.
for (i=0; i < n; i++)
    for (j=0; j < n; j++)
        if (j == 0)  a[i][j] = 1;
        else
        a[i][j] = 0;
// Demais elementos de a. Passo 3.
    for (i=1; i < n; i++)
        for (j=1; j <= i; j++)
        a[i][j] = a[i-1][j-1]+a[i-1][j];
        for (i=0; i < n; i++)
{
        for (j=0; j < n; j++)
            printf("%4d",a[i][j]);
    printf("\n");
}
}
