#include <stdio.h>
#include <stdlib.h>
int main() {
   float nota1, nota2, media;
   nota1 = 5.5;
   nota2 = 8.5;
   media = (nota1 + nota2)/2;
   printf("Media = %2.2f", media);
   if(media >= 7.0)
       printf(" - Aprovado");
   else // se a média é menor ou igual a 7.0
       printf(" - Prova final");

   printf("\n\n"); // salta 2 linhas em branco
   system("pause"); // não permite que a janela do prompt feche
   return 0;
}
