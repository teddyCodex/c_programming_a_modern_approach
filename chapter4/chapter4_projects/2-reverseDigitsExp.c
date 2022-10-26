#include <stdio.h>

/**
 * Program reverses three digits entered by user
 * Assumption - positive integers only.
 */

int main(void)
{
    int n, first_digit, second_digit, third_digit;

    printf("\nEnter a three digit number: ");
    scanf("%d", &n);

    first_digit = (n / 10) / 10;  // assigns first digit of 'n' to 'first_digit'
    second_digit = (n / 10) % 10; // assigns last digit of 'n' to 'second_digit'
    third_digit = n % 10;         // assigns last digit of 'n' to 'third_digit'

    printf("The reversal is %d%d%d\n\n", third_digit, second_digit, first_digit);

    return 0;
}