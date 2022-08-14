#include <stdio.h>
main(void)
{
float num1, num2;
char op;
printf("Entre com numero operador numero:\n");
scanf("%f %c %f", &num1, &op, &num2);
switch (op) {
case '+':
printf(" = %.2f", num1 + num2);
break;
case '-':
printf(" = %.2f", num1 - num2);
break;
case '*':
printf(" = %.2f", num1 * num2);
break;
case '/':
printf(" = %.2f", num1 / num2);
break;
default:
printf(" Operador invalido.");
break;
}
printf("\n");
}
