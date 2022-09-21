#include <stdio.h>
 #include <stdlib.h>

 void main()
 {
 float vlrProduto, vlrVenda;
 printf("Digite o valor do produto: ");
 scanf("%f", &vlrProduto);
 if (vlrProduto < 20) {
 vlrVenda = vlrProduto + (vlrProduto * 0.45);
 }
 else {
 vlrVenda = vlrProduto + (vlrProduto * 0.3);
 }
 printf("Valor do produto para venda: %.2f \n", vlrVenda);
 }
