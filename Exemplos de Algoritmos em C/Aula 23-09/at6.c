#include<stdio.h>
#include<math.h>

int main()
{
int numerosala, capacidade, alunosmatriculados;
printf("digite o numero da sala \n");
scanf("%d",&numerosala);
printf("digite a capacidade da sala \n");
scanf("%d",&capacidade);
printf("digite o numero de alunos \n");
scanf("%d",&alunosmatriculados);

if (alunosmatriculados >= capacidade)
{
printf("SALA = %d\n",numerosala);
printf("CAPACIDADE = %d\n",capacidade);
printf("CADEIRAS OCUPADAS = %d\n",alunosmatriculados);
printf("SALA LOTADA\n");
}

else if (alunosmatriculados < capacidade)
{
printf("SALA = %d\n",numerosala);
printf("CAPACIDADE = %d\n",capacidade);
printf("CADEIRAS OCUPADAS = %d\n",alunosmatriculados);
printf("SALA NAO LOTADA\n");
}

return 0;
}
