#include <stdio.h>

// function to calculate the monthly interest on the remaining loan amount
float monthly_int(float rate, float tenure)
{
  float x = ((rate / 100.0) / tenure);
  return (x);
}

// function to calculate the loan balance after removing repayment and adding interest
float monthly_bal(float loan, float monthlyRate, float repay_amount)
{
  float x = (loan * (1 + monthlyRate)) - repay_amount;
  return x;
}

// function to calculate and print loan balance for 12 months.
int loanCalc(float loan, float rate, float repay_amount, float tenure)
{
  printf("Loan Repayment Calculator\n*************************\n");

  float monthlyRate = monthly_int(rate, tenure);

  int startMonth = 1;

  while (startMonth <= tenure)
  {
    loan = monthly_bal(loan, monthlyRate, repay_amount);
    printf("Month %02d balance - S%.2f\n", startMonth, loan);
    startMonth++;
  }

  return (0);
}

// main function to receive user input on loan info
int main()
{
  float loan, rate, repay_amount, tenure;

  printf("Enter loan amount: ");
  scanf("%f", &loan);
  printf("Enter interest rate: ");
  scanf("%f", &rate);
  printf("Enter repayment amount: ");
  scanf("%f", &repay_amount);
  printf("Enter the tenure(in months): ");
  scanf("%f", &tenure);

  loanCalc(loan, rate, repay_amount, tenure);
}
