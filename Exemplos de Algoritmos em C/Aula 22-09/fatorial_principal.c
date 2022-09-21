#include <stdio.h>
#include <stdlib.h>
#include "mod_fat.c"


int main()
{
int a,b;
printf("digite o numero: ");
scanf("%d",&a);
b=fatorial(a);
printf("fatorial de %d = %d",a,b);
return 0;
}


