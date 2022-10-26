#include <stdio.h>

// program to evaluate polynomial below given x
// assuming x will always be an integer
// 3×⁵ + 2x⁴ - 5x³ - x² + 7x - 6

int main(void)
{
  int x, blk1, blk2, blk3, blk4, blk5, blk6, poly;

  printf("Enter a value for x: ");
  scanf("%d", &x);

  blk1 = 3 * (x * x * x * x * x);
  blk2 = 2 * (x * x * x * x);
  blk3 = 5 * (x * x * x);
  blk4 = x * x;
  blk5 = 7 * x;
  blk6 = 6;

  poly = blk1 + blk2 - blk3 - blk4 + blk5 - blk6;

  printf("Polynomial: 3×⁵ + 2x⁴ - 5x³ - x² + 7x - 6\n");
  printf("Result of the polynomial: %d\n", poly);
}
