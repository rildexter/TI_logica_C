#include <stdio.h>
#include <stdlib.h>

 struct horario {
 int hora;
 int minutos;
 int segundos;
 };
 typedef struct horario Hora;
 void main()
 {
 Hora horarios[5], horaMaior;
 int i;
 horaMaior.hora = 0;
 horaMaior.minutos = 0;
 horaMaior.segundos = 0;

 for (i=0; i<5; i++) {
printf("Informe a hora: \n");
 scanf("%d", &horarios[i].hora);
 printf("Informe os minutos: \n");
scanf("%d", &horarios[i].minutos);
 printf("Informe os segundos: \n");
 scanf("%d", &horarios[i].segundos);

 if ((horarios[i].hora > horaMaior.hora) ||
 (horarios[i].hora == horaMaior.hora && horarios[i].minutos >
horaMaior.minutos) ||
 (horarios[i].hora == horaMaior.hora && horarios[i].minutos ==
horaMaior.minutos &&
 horarios[i].segundos > horaMaior.segundos)) {
 horaMaior.hora = horarios[i].hora;
 horaMaior.minutos = horarios[i].minutos;
 horaMaior.segundos = horarios[i].segundos;
 }
 }
 printf("---------Maior hora lida---------\n");
 printf("Hora.....: %d \n", horaMaior.hora);
 printf("Minutos..: %d \n", horaMaior.minutos);
 printf("Segundos.: %d \n", horaMaior.segundos);
 }
