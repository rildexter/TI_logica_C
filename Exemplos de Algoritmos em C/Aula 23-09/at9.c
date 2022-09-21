#include <stdio.h>
#include <stdlib.h>
struct ponto {
 int x;
 int y;
 };
 void main()
 {
 struct ponto pA, pB, p;
 printf("Retangulo: X (ponto esquerdo) \n");
 scanf("%d", &pA.x);
 printf("Retangulo: Y (ponto superior) \n");
 scanf("%d", &pA.y);

 printf("Retangulo: X (ponto direito) \n");
 scanf("%d", &pB.x);
 printf("Retangulo: Y (ponto inferior) \n");
 scanf("%d", &pB.y);

 printf("Ponto: X \n");
 scanf("%d", &p.x);
 printf("Ponto: Y \n");
 scanf("%d", &p.y);

 if (p.x >= pA.x && p.x <= pB.x && p.y >= pB.y && p.y <= pA.y)
 printf("O ponto esta dentro do retangulo\n");
 else
 printf("O ponto nao esta dentro do retangulo\n");
 }
