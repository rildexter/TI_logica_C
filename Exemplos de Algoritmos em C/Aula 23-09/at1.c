//QUESTÃO 01
#include <stdio.h>
#include <stdlib.h>
struct ALUNO
{
int cpf;
float nota;
};
typedef struct ALUNO Al;
int main()
{
int i;
Al alunos,alunos1;
FILE *arq;
arq = fopen("Turma.arq","w");
for ( i = 0 ; i < 5; i++ )
{
printf("Digite o cpf do aluno\n");
scanf("%d",&alunos.cpf);
printf("Digite a nota do aluno\n");
scanf("%f",&alunos.nota);
fwrite(&alunos,sizeof(Al),1,arq);
}
fclose(arq);
arq = fopen("Turma.arq","r");
for ( i = 0 ; i < 5; i++ )
{
fread(&alunos1,sizeof(Al),1,arq);
printf("%d %.2f\n",alunos1.cpf,alunos1.nota);
}
fclose(arq);
return 0;
}
