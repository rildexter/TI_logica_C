#include <stdio.h>
int main ()
{
	char strings [3][10];
	int count;
	for (count=0;count<3;count++)
        {
        	printf ("\n\nDigite uma string: ");
        	gets (strings[count]);
        }
	printf ("\n\n\nAs strings que voce digitou foram:\n\n");
	for (count=0;count<5;count++)
                printf ("%s\n",strings[count]);
        return(0);
}
