#include <stdio.h>

// Program that displays tax due based on user input

// *Income*             *Tax Amount*
// Not over $750        1% of income
// $750 - $2,250        $7.50 plus 2% of amount over $750
// $2,250 - $3,750      $37.50 plus 3% of amount over $2,250
// $3,750 - $5,250      $82.50 plus 4% of amount over $3,750
// $5,250 - $7,000      $142.50 plus 5% of amount over $5,250
// Over $7,000          $230 plus 6% of amount over $7,000

int main(void)
{
    float income, tax;

    printf("\nEnter taxable income: ");
    scanf("%f", &income);

    if (income <= 750.00f)
        tax = 0.01f * income;

    else if (income <= 2250.00f)
        tax = 7.50f + (0.02f * (income - 750.00f));

    else if (income <= 3750.00f)
        tax = 37.50f + (0.03f * (income - 2250.00f));

    else if (income <= 5250.00f)
        tax = 82.50f + (0.04f * (income - 3750.00f));

    else if (income <= 7000.00f)
        tax = 142.50f + (0.05f * (income - 5250.00f));

    else
        tax = 230.00f + (0.06f * (income - 7000.00f));

    printf("------------------------------\n");
    printf("Your tax payable is: $%.2f \n", tax);

    printf("\n");
    return 0;
}
