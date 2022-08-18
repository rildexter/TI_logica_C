#include<stdio.h>
#include<locale.h>
int main() {
    int v[20],i,maior=0,igual=0,menor=0;
//setlocale(LC_ALL,"Portuguese"); 
for(i=0;i<20;i++)
{

    //printf("\n Informe o elemento[%d]= ",i);
       scanf("%d", &v[i]);
       }
for(i=0;i<20;i++) /*agora, vamos testar os elementos */
  {    if(v[i]>v[0])
     {       maior=maior+1;     }    
if(v[i+1]==v[0]) {igual=igual+1;
}
    if(v[i]<v[0])     {menor=menor+1;
    } }
 printf("\n %d números são maiores que %d\n",maior,v[0]);
 printf("\n %d números são menores que %d\n",menor,v[0]);
 printf("\n números iguais a %d = %d\n",v[0],igual);
 return 0;
 }
