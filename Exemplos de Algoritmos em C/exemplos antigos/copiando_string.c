#include <stdio.h>
#include <string.h>
int main ()
{
	char str1[100],str2[100],str3[100];
	printf ("Entre com uma string: ");
	gets (str1);
	strcpy (str2,str1);	/* Copia str1 em str2 */
	printf ("\n\n Original: %s \n Copia:%s",str1,str2);
	return(0);
}
