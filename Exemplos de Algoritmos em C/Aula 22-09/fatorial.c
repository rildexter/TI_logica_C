#include <stdio.h>
#include <stdlib.h>
int fatorial( int i ) {
int b = 1;
while(i >= 1)
{
    b *= i;
    i--;
}
    return b;
}

int main()
{
int a,b;
printf("digite o numero: ");
scanf("%d",&a);
b=fatorial(a);
printf("fatorial de %d = %d",a,b);
return 0;
}
