#include <stdio.h>
#include <stdlib.h>
int fatorial( int n ) {
    if ( n == 0 )
        return 1;
    return n * fatorial( n-1 );
}

main()
{
int a,b;
printf("digite o numero: ");
scanf("%d",&a);
b=fatorial(a);
printf("fatorial: %d",b);
return 0;
}
