#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
struct Data
{int Dia, Ano; char Mes[20];};
main()
{
setlocale(LC_ALL,"portuguese");
struct Data d1 = {01,2022,"Jan"};
printf("Data inicial será:");
printf("%d/%s",d1.Dia,d1.Mes);
printf("/%d\n",d1.Ano);
printf("Entre com o dia:");
scanf("%d",&d1.Dia);
fflush(stdin);
printf("Entre com o mes:");
gets(d1.Mes);
printf("Entre com o ano:");
scanf("%d",&d1.Ano);
printf("A data digitada foi:");
printf("%d/%s",d1.Dia,d1.Mes);
printf("/%d\n",d1.Ano);
system("pause");
}
