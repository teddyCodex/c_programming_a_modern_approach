#include <stdio.h>

// program to split a given amount using
// the smallest no of bills (20, 10, 5, 1)

int main(void)
{
  int usd;

  printf("\n***********************\n");
  
  printf("Enter a dollar amount: ");
  scanf("%d", &usd);

  printf("\n***********************\n");
  printf("Amount entered: $%d\n", usd);

  printf("\n***********************\n");
  printf("Denomination Spilt\n");
  printf("\n***********************\n");
  
  printf("$20 bills: %d\n", usd / 20);
  usd = usd - ((usd / 20) * 20);
  
  printf("$10 bills: %d\n", usd / 10);
  usd = usd - ((usd / 10) * 10);

  printf("$5 bills: %d\n", usd / 5);
  usd = usd - ((usd / 5) * 5);

  printf("$1 bills: %d\n", usd / 1);
  usd = usd - ((usd / 1) * 1);

  //func below to check usd amount left to split.
  // printf("%d\n", usd);

  return 0;
}
