/* Adds two fractions*/

#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("\nEnter two fractions separated by a plus sign(x/y+a/b): ");
    scanf("%d / %d+ %d / %d", &num1, &denom1, &num2, &denom2);

    // printf("Enter second fraction: ");
    // scanf("%d / %d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    printf("The sum is %d/%d\n\n", result_num, result_denom);

    return 0;
}
