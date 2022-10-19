/* This program finds the average of a given set of numbers by the user */
/* Author - Ubuntu6ty9.dev */

#include <stdio.h>

int main(void)
{
  int i,  numOfNums = 0, total = 0, value;
  float average;

  printf("How many numbers are to be averaged?: ");
  scanf("%d", &numOfNums);

  for (i = 0; i < numOfNums; i++)
    {
      printf("Please enter the %d numbers: ", numOfNums);
      scanf("%d", &value);
      total += value;
      printf("Inputted %d\n", value);
    }

  average = (float)total / (float)numOfNums;
  printf("You inputted %d values.\nThe average is %f\n", numOfNums, average);

  return (0);
}
