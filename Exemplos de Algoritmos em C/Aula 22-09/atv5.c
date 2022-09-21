#include <stdio.h>
#include <stdlib.h>
struct loja
{
 int quantidade,codigo;
 float preco;
};
int main()
{
 struct loja estoque[5],estoque2[5];
 int i,j;
 float media;
 for ( i = 0; i < 5; i++ )
 {
 printf("Digite o codigo do produto %d:\n",i+1);
 scanf("%d",&estoque[i].codigo);
 printf("Digite a quantidade do produto %d:\n",i+1);
 scanf("%d",&estoque[i].quantidade);
 printf("Digite o preco do produto %d\n",i+1);
 scanf("%f",&estoque[i].preco);
 }
 j = 0 ;
 for ( i = 0; i < 5; i++ )
 {
 if ( estoque[i].preco > 10 )

 {
 estoque2[j].preco = estoque[i].preco;
 estoque2[j].codigo = estoque[i].codigo;
 estoque2[j].quantidade = estoque[i].quantidade;
 j++;
 }
 }
 media = 0;
 if ( j > 0 )
 {
 for ( i = 0 ; i < j ; i++ )
 {
 media = media + estoque2[i].preco;
 }
 media = media/j;
 printf("A media dos produtos acima de R$10,00 eh: R$%.2f\n",media);
 for ( i = 0 ; i < j ; i++ )
 {
 printf("Produto %d\nCodigo: %d Quantidade: %d Preco:R$%.2f\n",
        i+1,estoque2[i].codigo,estoque2[i].quantidade,estoque2[i].preco);
 }
 }
 else
 {
 printf("Nao foram encontrados produtos com preco acima de R$10,00\n");
 }
 return 0;
}
