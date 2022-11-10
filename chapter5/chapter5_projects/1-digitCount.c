#include <stdio.h>

// program that counts how many digits a number has

// Enter a number: 374
// The number 374 has 3 digits

// assumption - given number will have a max of 4 digits.

int main(void)
{
    int num;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    if (num >= 0 && num <= 9)
        printf("The number %d has 1 digit\n", num);
    else if (num >= 10 && num <= 99)
        printf("The number %d has 2 digits\n", num);
    else if (num >= 100 && num <= 999)
        printf("The number %d has 3 digits\n", num);
    else
        printf("The number %d has 4 or more digits\n", num);

    putchar('\n');
    return 0;
}