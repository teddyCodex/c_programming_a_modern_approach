// Program that calculates loan repayment till 0 given several pieces of information.
// Assumption - all user input will be positive integers

#include <stdio.h>
#define MONTHS_IN_YEAR 12

// function to calculate the monthly interest on the remaining loan amount
float monthly_int(float rate, float months_in_year)
{
  float x = ((rate / 100.0) / months_in_year);
  return x;
}

// function to calculate the loan balance after removing repayment and adding interest
float monthly_bal(float loan, float monthlyRate, float repay_amount)
{
  float i = (loan * (1 + monthlyRate)) - repay_amount;
  return i;
}

// function to calculate and print loan balance till loan is fully repaid.
int loanCalc(float loan, float rate, float repay_amount, float months_in_year)
{
  printf("Loan Repayment Calculator\n*************************\n");

  float monthlyRate = monthly_int(rate, months_in_year);

  int startMonth = 1;

  while (loan > repay_amount)
  {
    loan = monthly_bal(loan, monthlyRate, repay_amount);
    printf("Month %02d balance = $%.2f\n", startMonth, loan);
    startMonth++;
    if (loan <= repay_amount)
    {
      printf("Month %02d: Congrats! Loan is fully repaid!\n", startMonth);
    }
  }

  return 0;
}

// main function to receive user input on loan info
int main()
{
  float loan, rate, repay_amount;

  printf("Enter loan amount: ");
  scanf("%f", &loan);
  printf("Enter interest rate: ");
  scanf("%f", &rate);
  printf("Enter repayment amount: ");
  scanf("%f", &repay_amount);

  loanCalc(loan, rate, repay_amount, MONTHS_IN_YEAR);
}
