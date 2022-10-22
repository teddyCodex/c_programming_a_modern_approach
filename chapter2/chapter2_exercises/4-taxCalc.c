// program that take values (dollars and cents)
// and retuens new value with 5% tax added

#include <stdio.h>

int main(void)
{
  float amount, taxedAmount, tax = 0.05;

  printf("Enter amount: ");
  scanf("%f", &amount);
  
  taxedAmount = amount * (1 + tax);
  printf("Total amount incl tax is %.2f\n", taxedAmount);

  return 0;
}
