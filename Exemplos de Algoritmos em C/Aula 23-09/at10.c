#include <stdio.h>
#include <stdlib.h>
 struct aluno {
 int matricula;
 char nome[30];
 float p1, p2, p3;
 };
 typedef struct aluno Aluno;
 void main()
 {
 Aluno alunos[5];
 int i, iMaior=0;
 float media, maiorMedia=0;

 for (i=0; i<5; i++) {
printf("Informe a matricula do aluno: \n");
 scanf("%d", &alunos[i].matricula);
 printf("Informe o nome do aluno: \n");
 scanf("%s", &alunos[i].nome);
 printf("Informe a nota da P1: \n");
 scanf("%f", &alunos[i].p1);
 printf("Informe a nota da P2: \n");
 scanf("%f", &alunos[i].p2);
 printf("Informe a nota da P3: \n");
 scanf("%f", &alunos[i].p3);

 media = (alunos[i].p1 + alunos[i].p2 + alunos[i].p3) / 3;
 if (media > maiorMedia) {
 maiorMedia = media;
 iMaior = i;
 }}
 printf("---------Dados do aluno com maior media---------\n");
 printf("Matricula: %d \n", alunos[iMaior].matricula);
 printf("Nome.....: %s \n", alunos[iMaior].nome);
 printf("Nota P1..: %f \n", alunos[iMaior].p1);
 printf("Nota P2..: %f \n", alunos[iMaior].p2);
 printf("Nota P3..: %f \n", alunos[iMaior].p3);
 printf("Media....: %f \n", maiorMedia);
 }
