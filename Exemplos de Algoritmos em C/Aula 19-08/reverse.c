#include <stdio.h>
int main()
{
char string[20];

printf("Entre com a string :");
scanf("%s",string);
printf("Invertendo: %s",strrev(string));

return(0);
}

