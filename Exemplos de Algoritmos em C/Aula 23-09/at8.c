#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 struct ponto {
 int x;
 int y;
};
 void main()
 {
 struct ponto pA, pB;
 float compDiagonal, altura, base, area, perimetro;
 printf("Retangulo: X (ponto esquerdo) \n");
 scanf("%d", &pA.x);
 printf("Retangulo: Y (ponto superior) \n");
 scanf("%d", &pA.y);

 printf("Retangulo: X (ponto direito) \n");
 scanf("%d", &pB.x);
 printf("Retangulo: Y (ponto inferior) \n");
 scanf("%d", &pB.y);

 altura = sqrt(pow(pA.x - pA.x, 2) + pow(pA.y - pB.y, 2));
 base = sqrt(pow(pB.x - pA.x, 2) + pow(pB.y - pB.y, 2));
 area = altura * base;
 compDiagonal = sqrt(pow(pB.x - pA.x, 2) + pow(pB.y - pA.y, 2));
 perimetro = (altura + base) * 2;

 printf("Comprimento da diagonal: %f \n", compDiagonal);
 printf("Area: %f \n", area);
 printf("Perimetro: %f \n", perimetro);
 }
