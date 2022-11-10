#include <stdio.h>

// program that takes 24hr time and displays it in 12hr form.

/*Expected Format*/
// Enter a 24-hour time: 21:11
// Equivalent 12-hour time: 9:11 PM

/* Be careful not to display 12:00 as 0:00 */

int main(void)
{
    int hours, mins;

    printf("\nEnter a 24-hour time (HH:MM): ");
    scanf("%d :%d", &hours, &mins);

    printf("-----------------------------------\n");
    if (hours < 24 && mins < 60)
    {
        if (hours == 0)
            printf("Equivalent 12-hour time: %02d:%02d AM", hours, mins);
        else if (hours < 12)
            printf("Equivalent 12-hour time: %02d:%02d AM", hours, mins);
        else if (hours > 12)
            printf("Equivalent 12-hour time: %02d:%02d PM", hours - 12, mins);
    }
    else
        printf("Invalid time format!\nCheck Input");

    printf("\n\n");
    return 0;
}