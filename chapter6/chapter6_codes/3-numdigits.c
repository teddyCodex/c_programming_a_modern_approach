/* Calculates the number of digits in an integer */

#include <stdio.h>

int main(void)
{
    int digits = 0, n;

    printf("\nEnter a non-negative number: ");
    scanf("%d", &n);

    do
    {
        n /= 10;
        digits++;
    } while (n > 0);

    printf("-----------------------------\n");
    printf("This number has %d digits\n\n", digits);

    return 0;
}