#include <stdio.h>
#include <string.h>
#include<locale.h>
struct Livros {
   char  titulo[50];
   char  autor[50];
   char  assunto[100];
   int   id_livro;
};
int main( ) {
setlocale(LC_ALL,"portuguese");
   struct Livros Livro1;        /* Declaramos Livro1 do tipo Livro */
   struct Livros Livro2;        /* Declaramos Livro2 do tipo Livro */
   /* especifica��es do livro 1 */
   strcpy( Livro1.titulo, "T�tulo gen�rico");
   strcpy( Livro1.autor, "Blog Trybe");
   strcpy( Livro1.assunto, "Um livro bem gen�rico");
   Livro1.id_livro = 6495407;
   /* especifica��es do livro 2 */
   strcpy( Livro2.titulo, "Outro t�tulo gen�rico");
   strcpy( Livro2.autor, "Blog Trybe 2");
   strcpy( Livro2.assunto, "Mais um livro bem gen�rico");
   Livro2.id_livro = 6495700;
   /* mostrando as informa��es do livro 1 */
   printf( "Livro 1 titulo : %s\n", Livro1.titulo);
   printf( "Livro 1 autor : %s\n", Livro1.autor);
   printf( "Livro 1 assunto : %s\n", Livro1.assunto);
   printf( "Livro 1 id_livro : %d\n", Livro1.id_livro);
   /* mostrando as informa��es do livro 2 */
   printf( "Livro 2 titulo : %s\n", Livro2.titulo);
   printf( "Livro 2 autor : %s\n", Livro2.autor);
   printf( "Livro 2 assunto : %s\n", Livro2.assunto);
   printf( "Livro 2 id_livro : %d\n", Livro2.id_livro);

   return 0;
}
