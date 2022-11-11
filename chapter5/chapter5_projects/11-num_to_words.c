#include <stdio.h>

/**
 * Program that asks the user for a two-digit number.
 * Then prints the English word for Lhe number
 *
 * Enter a two-digit number: 45
 * You entered the number forty-five.
 *
 * Hint : Break the number into two digits.
 * Use one switch statement to print the word for the first digit (twenty, thirty and so forth)
 * Use a second switch statement to print the word for the second digit
 * Don't forget that the numbers between 11 and 19 require special treatment.
 */

int main(void)
{
    int num, d1, d2;

    printf("\nEnter a two-digit number: ");
    scanf("%d", &num);

    printf("----------------------------\n");
    printf("You entered the number: ");

    if (num >= 10 && num <= 19)
    {
        switch (num)
        {
        case 10:
            printf("ten");
            break;
        case 11:
            printf("eleven");
            break;
        case 12:
            printf("twelve");
            break;
        case 13:
            printf("thirteen");
            break;
        case 14:
            printf("fourteen");
            break;
        case 15:
            printf("fifteen");
            break;
        case 16:
            printf("sixteen");
            break;
        case 17:
            printf("seventeen");
            break;
        case 18:
            printf("eighteen");
            break;
        case 19:
            printf("nineteen");
            break;
        }
    }
    else
    {
        switch (num / 10)
        {
        case 2:
            printf("twenty-");
            break;
        case 3:
            printf("thirty-");
            break;
        case 4:
            printf("forty-");
            break;
        case 5:
            printf("fifty-");
            break;
        case 6:
            printf("sixty-");
            break;
        case 7:
            printf("seventy-");
            break;
        case 8:
            printf("eighty-");
            break;
        case 9:
            printf("ninety-");
            break;
        }

        switch (num % 10)
        {
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
        }
    }

    printf("\n\n");
    return 0;
}