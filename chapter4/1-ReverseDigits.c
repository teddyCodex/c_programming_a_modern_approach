#include <stdio.h>

/**
 * Program reverses two digits entered by user
 * Assumption - positive integers only.
 */

int main(void)
{
    int n, first_digit, second_digit;

    printf("\nEnter a two digit number: ");
    scanf("%d", &n);

    first_digit = n / 10;  // assigns first digit of 'a' to 'b'
    second_digit = n % 10; // assigns last digit of 'a' to 'c'

    printf("The reversal is %d%d\n\n", second_digit, first_digit);

    return 0;
}