# include <stdio.h>
# include <stdio.h>
main()
{ int i, j;
int a[3][3];
// Colocando valores em a.
for (i=0; i < 3; i++)
for (j=0; j < 3; j++)
a[i][j] = i + j + 1;
// Mostra elementos de a-> a[i][j].
for (i=0; i < 3; i++)
{ for (j=0; j < 3; j++)
printf(" %d ", a[i][j]);
puts("");
}
}
