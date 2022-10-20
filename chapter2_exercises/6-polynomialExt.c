#include <stdio.h>

// 5-polynomial revamped
// ((((3x + 2)x - 5)x - 1)x + 7)x - 6

int main(void)
{
  int x, poly;
  
  printf("Enter a value for x: ");
  scanf("%d", &x);


  poly = (((((3 * x) + 2) * x - 5) * x - 1) * x + 7) * x - 6;

  printf("Polynomial:((((3x + 2)x - 5)x - 1)x + 7)x - 6");
  printf("Result of the polynomial: %d\n", poly);
}
