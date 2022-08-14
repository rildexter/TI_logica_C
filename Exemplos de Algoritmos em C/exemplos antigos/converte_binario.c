#include <stdio.h>
#define MAX 50
main()
{
	int num,aux_num,j,i = 0,vet_bin[MAX];
	printf("Digite um numeral decimal:\n");
	scanf("%d",&num);
	aux_num = num;
	while(num > 0)
	{
		vet_bin[i] = num % 2;
		i++;
		num = num / 2;
	}
	printf("%d em binario: ", aux_num);
	for(j = i - 1; j >= 0; j--)
		printf("%d", vet_bin[j]);
	printf("\n");
	system("Pause");
	return 0;
}
