/* prints int and float values in various formats */

#include <stdio.h>

int main(void)
{
  int i;
  float x;

  i = 40;
  x = 839.29f;

  printf("|%d|%5d|%-5d|%5.3d\n", i, i, i, i);
}
