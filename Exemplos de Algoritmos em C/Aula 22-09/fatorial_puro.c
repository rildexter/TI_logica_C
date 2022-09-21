#include <stdio.h>
#include <stdlib.h>
int main()
{
int i, a, b;
b = 1;
printf("digite o numero: ");
scanf("%d",&a);
i = a;
while(i >= 1)
{
    b *= i;
    i--;
}
printf("fatorial de %d  = %d",a, b);
return 0;
}
