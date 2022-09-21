 #include <stdio.h>
 #include <stdlib.h>

 void main() {
 float num;
 int i;

 for (i=1; i<=10; i++) {
 printf("Informe um numero:");
 scanf("%f", &num);
 while (num <= 0) {
 printf("\n ATENCAO! Informe um numero maior que zero:");
 scanf("%f", &num);
 }
 printf("Quadrado: %f \n", num * num);
 }
 }
