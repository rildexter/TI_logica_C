/*Dados dois vetores x e y em um espa�o de 10 dimens�es,
determine o produto escalar desses vetores
usando um la�o. */
#include<stdio.h>
int main()
{
 int A[10], B[10], i, produto=0;

 for(i=0; i<10; i++)
 {
 printf("Qual o valor de A[%d]?\n ", i);
 scanf("%d", &A[i]);
 }
 for(i=0; i<10; i++)
 {
 printf("Qual o valor de B[%d]?\n ", i);
 scanf("%d", &B[i]);
 }

 for(i=0; i<10; i++)
 produto= produto + A[i]* B[i];


 printf("\nO produto escalar de A e B vale:%d ", produto);

 getch();
}
