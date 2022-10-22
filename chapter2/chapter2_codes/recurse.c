/* This program finds the factorial
 * of a given number using recursion
 */

#include <stdio.h>

int factorial(int n)
{
  int retval = 1;
  if (n != 1)
    {
      retval = n * factorial(n - 1);
    }
  return retval;
}

int main(void)
{
  int val = factorial(5);

  printf("%d! = %d\n", 5, val);

  printf("%d! = %d\n", 4, factorial(4));
}
