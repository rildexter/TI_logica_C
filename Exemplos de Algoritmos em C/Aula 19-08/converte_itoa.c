#include <stdio.h>
#include <stdlib.h>

int main() {
  char str[10]; /* MUST be big enough to hold all
                   the characters of your number!! */

  printf("15 in binary is %s\n",  itoa(15, str, 2));
  printf("15 in octal is %s\n",   itoa(15, str, 8));
  printf("15 in decimal is %s\n", itoa(15, str, 10));
  printf("15 in hex is %s\n",     itoa(15, str, 16));
  return 0;
}
