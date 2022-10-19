/*
  This program calculates the dimensional weight
  of a box given input by user.
 */

#include <stdio.h>
#define INCHES_PER_POUND 166

int main(void)
{
  int height, width, length, volume, dweight;

  printf("Enter the height of the box: ");
  scanf("%d", &height);

  printf("Enter the width of the box: ");
  scanf("%d", &width);

  printf("Enter the length of the box: ");
  scanf("%d", &length);

  volume = height * width * length;
  dweight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

  printf("Box Volume (cubic Inches): %d\n", volume);
  printf("Dimensional Weight (pounds): %d\n\n", dweight);
}
