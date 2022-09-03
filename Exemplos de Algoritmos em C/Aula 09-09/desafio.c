#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>

int N;

// desenha um circulo no meio e chama a funcao mais 4 vezes
// recursivamente reduzindo o espaco de desenho e o tamanho
// do circulo. A variavel N e' o controle de parada
void desenha(int x1,int y1,int x2,int y2,int diam,int N)
{
  int mx;   // posicao X do circulo
  int my;   // posicao Y do circulo

  if (N>0) {    // condicao de parada!
    // calcula a posicao do circulo no meio da tela
    mx=(x1+x2)/2;
    my=(y1+y2)/2;
    // primeiro desenha os circulos menores
    desenha(x1,y1,mx,my,diam/2,N-1);
    desenha(mx,y1,x2,my,diam/2,N-1);
    desenha(x1,my,mx,y2,diam/2,N-1);
    desenha(mx,my,x2,y2,diam/2,N-1);
    // agora desenha o circulo maior
    setcolor(N);
    circle(mx,my,diam);
  }
}

void main()
{
  int gdriver=DETECT; // numero da placa de video usada
  int gmode;          // numero do modo de video usado
  int errorcode;      // codigo de erro retornado por "initgraph"

  // le^ o numero de iteracoes e verifica se e' "aceitavel"
  printf("Entre com o numero de iteracoes (1-10): ");
  scanf("%d%*c",&N);
  if (N>=1 && N<=10) {

    // Tenta inicializar o modo grafico detectando a placa de video
    initgraph(&gdriver, &gmode, "");
    errorcode = graphresult();
    if (errorcode != grOk)
    {
      printf("Erro no modo graifco: %s\n", grapherrormsg(errorcode));
      exit(1);
    }

    // chama a funcao de desenho usando a tela toda inicialmente
    desenha(0,0,getmaxx(),getmaxy(),32,N);

    getch();
    closegraph(); // Volta para a tela de texto
  }
}
