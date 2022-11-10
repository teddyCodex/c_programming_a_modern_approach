#include <stdio.h>

// Program that takes four integers and prints the largest and the smallest integers.

/* Sample Output */
// Enter four integers: 21 43 10 35
// Largest: 43
// Smallest: 10

// ** use as few IF statements as possible.

int main(void)
{
    // a, b, c, d = integers to be evaluated
    // l1, l2, s1, s2 = largest two integers and smallest two integers
    int a, b, c, d, l1, l2, s1, s2;

    printf("\nEnter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b)
    {
        l1 = a;
        s1 = b;
    }
    else
    {
        l1 = b;
        s1 = a;
    }

    if (c > d)
    {
        l2 = c;
        s2 = d;
    }
    else
    {
        l2 = d;
        s2 = c;
    }

    if (l1 > l2)
        printf("Largest: %d\n", l1);
    else
        printf("Largest: %d\n", l2);

    if (s1 > s2)
        printf("Smallest: %d\n", s2);
    else
        printf("Smallest: %d\n", s1);

    printf("\n");

    return 0;
}