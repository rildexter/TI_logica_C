#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   int val;
   char str[20];

   strcpy(str, "2022");
   val = atoi(str);
   printf("String str value = %s, Int val value = %d\n", str, val);

   strcpy(str, "canal");
   val = atoi(str);
    printf("String str value = %s, Int val value = %d\n", str, val);

   return(0);
}
