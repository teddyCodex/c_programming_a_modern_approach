/* This program sums up all numbers entered by a user except 0 */

#include <stdio.h>

int main(void)
{
    int n, sum;

    printf("\nThis program sums up a series of integers.\n");
    printf("--------------------------------------------\n");
    printf("Enter integers (0 to terminate): ");

    scanf("%d", &n);
    while (n != 0)
    {
        sum = sum + n;
        printf("\nCurrent sum is: %d\nNext integer: ", sum); // added this printf to print sum immediately after user presses enter
        scanf("%d", &n);
    }
    printf("\nThe final sum is: %d\n\n", sum);

    return 0;
}