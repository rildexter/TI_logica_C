#include <stdio.h>
int main()
{
char string[20];  char caracter;

printf("Digite a string :");
gets(string);
printf("\nDigite um caractere :");
scanf("%c",&caracter);
printf("\nSubstituindo ==> %s",strset(string,caracter));
  return(0);
}
