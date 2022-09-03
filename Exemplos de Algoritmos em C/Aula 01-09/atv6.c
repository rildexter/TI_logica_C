/*Criar um programa que receba 04 nomes
em matrizes e mostre em tela:
*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int count;
    char nomes [4][10] = {{"Pedro"},{"Carlos"},{"Luiz"},{"Marcelo"}};
    printf("%c\n", nomes);
    	for (count=0;count<5;count++)
                printf ("%s\n",nomes[count]);
    return 0;
}
