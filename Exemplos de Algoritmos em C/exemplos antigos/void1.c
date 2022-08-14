#include <stdio.h>
void Mensagem (void)
{
	printf ("Ola! Eu estou vivo.\n");
}


int main ()
{
	Mensagem();
	printf ("\tDiga de novo:\n");
	Mensagem();
	return 0;
}
