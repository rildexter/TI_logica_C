#include<stdlib.h>
#include<time.h>

main()
{
    int num_alea, tent=0, qtd_num=100000;
    srand(time(NULL));
    num_alea=rand()%qtd_num;
    printf("numero gerado %d\n\n", num_alea);
    system("pause");
}
