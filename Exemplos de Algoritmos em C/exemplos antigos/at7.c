#include <stdio.h>
void exchange(int a,int b);
void main(){
int a , b;
a=5;
b=7;
exchange(a,b);
printf("a = %d, b = %d\n",a,b);
}

void exchange(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("a = %d, b = %d\n",a,b);
}
