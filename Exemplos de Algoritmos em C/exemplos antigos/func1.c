#include <stdio.h>
#include<locale.h>
void imprime()
{
  printf("******************************\n");
  printf("* Voc� � lindo demais!!! *\n");
  printf("******************************\n\n");
  return;
}
    main()
    {
        char continuar;
        setlocale(LC_ALL,"Portuguese");
        printf("Programa Alto Estima\n\n");
        do
        {
            imprime();
            printf("Mais elogios? [s-sim, n-n�o]");
            scanf(" %c", &continuar);
        }
        while (continuar == 's');
        printf("\n\n");
        return 0;
    }
