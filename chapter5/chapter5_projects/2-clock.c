#include <stdio.h>

// program that takes 24hr time and displays it in 12hr form.

/*Expected Format*/
// Enter a 24-hour time: 21:11
// Equivalent 12-hour time: 9:11 PM

/* Be careful not to display 12:00 as 0:00 */

int main(void)
{
    int hours, mins;

    putchar('\n');

    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%d :%d", &hours, &mins);

    // conditional to check for 24-hour time validity
    if (hours <= 23 && mins <= 59)
    {
        printf("Equivalent 12-hour time: ");
        switch (hours)
        {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
            printf("%02d", hours);
            break;
        case 13:
            printf("1");
            break;
        case 14:
            printf("2");
            break;
        case 15:
            printf("3");
            break;
        case 16:
            printf("4");
            break;
        case 17:
            printf("5");
            break;
        case 18:
            printf("6");
            break;
        case 19:
            printf("7");
            break;
        case 20:
            printf("8");
            break;
        case 21:
            printf("9");
            break;
        case 22:
            printf("10");
            break;
        case 23:
            printf("11");
            break;
        }
        printf(":%02d", mins);

        if (hours < 12)
            printf(" AM");
        else
            printf(" PM");
    }
    else
        printf("invalid time format");

    printf("\n\n");
    return 0;
}

// not sure how to represent 24:00 as 12:00 AM.
// Will figure this out later.
