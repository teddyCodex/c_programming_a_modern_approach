#include <stdio.h>

// Program that prompts the user to enter two dates and then indicates which date comes earlier on the calendar.

/* Sample Output */
/**
 * Enter first date {mm/dd/yy): 3/6/08
 * Enter second date (mm/dd/yy) : 5/17/07
 * 5/17/07 is earlier than 3/6/08
 */

int main(void)
{
    int mm1, mm2, dd1, dd2, yy1, yy2;

    printf("\nEnter the first date (mm/dd/yy): ");
    scanf("%d /%d /%d", &mm1, &dd1, &yy1);
    printf("Enter the second date (mm/dd/yy): ");
    scanf("%d /%d /%d", &mm2, &dd2, &yy2);

    if (yy1 > yy2)
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", mm2, dd2, yy2, mm1, dd1, yy1);
    else if (yy1 == yy2 && mm1 > mm2)
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", mm2, dd2, yy2, mm1, dd1, yy1);
    else if (yy1 == yy2 && mm1 == mm2 && dd1 > dd2)
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", mm2, dd2, yy2, mm1, dd1, yy1);
    else
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", mm1, dd1, yy1, mm2, dd2, yy2);

    printf("\n");
    return 0;
}