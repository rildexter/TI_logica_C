#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   float val;
   char str[20];

   strcpy(str, "2022");
   val = atof(str);
 printf("String str value = %s, float val value = %f\n", str, val);

   strcpy(str, "canal");
   val = atof(str);
 printf("String str value = %s, float val value = %f\n", str, val);

   return(0);
}
