#include <stdio.h>

/**
 * Program reverses three digits entered by user
 * Assumption - positive integers only.
 */

int main(void)
{
    int n1, n2, n3;

    printf("\n***** Enter 3 digits for reversal *****\n");
    printf("Enter 1st digit: ");
    scanf("%d", &n1);
    printf("Enter 2nd digit: ");
    scanf("%d", &n2);
    printf("Enter 3rd digit: ");
    scanf("%d", &n3);

    printf("\nThe reversal is %d%d%d\n\n", n3, n2, n1);

    return 0;
}