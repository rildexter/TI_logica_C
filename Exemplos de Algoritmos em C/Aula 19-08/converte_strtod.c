#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char *string, *stopstring;
    double x;
    long   l;
    int    base;
    unsigned long ul;

    string = "3.1415926misturei tudo aqui";
    x = strtod(string, &stopstring);
    printf("string = %s\n", string);
    printf("\nreconhece a parte float strtod = %f\n", x);
    printf("reconhece a parte caracter: %s\n\n", stopstring);


}
