#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
main()
{
 system("color F5");
 int z;
 float vetcubo[5], vet[5];
 for(z=0;z<5;z++)
 {
 printf("Digite um numero: ");
 scanf("%f",&vet[z]);
 printf("\n");
 vetcubo[z]=pow(vet[z],3);
 }
 for(z=0;z<5;z++)
 printf("%3.2f\t", vetcubo[z]);
 printf("\n");
 system("pause");
 return(0);
}
