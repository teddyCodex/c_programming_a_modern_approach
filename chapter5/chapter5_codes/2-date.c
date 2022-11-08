// Program that prints the date in a legal form

// Dated this ___________ day of _____________, 20____

/******Sample of output when code is run******/
// Enter Date (mm/dd/yy): 7/19/14
// Dated this 19th day of July, 2014.

#include <stdio.h>

int main(void)
{
    int month, day, year;

    printf("\nEnter Date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Dated this %d", day);
    switch (day)
    {
    case 1:
    case 21:
    case 31:
        printf("st");
        break;
    case 2:
    case 22:
        printf("nd");
        break;
    case 3:
    case 23:
        printf("rd");
        break;
    default:
        printf("th");
        break;
    }
    printf(" day of ");
    switch (month)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    }
    printf(", 20%.2d.\n\n", year);

    return 0;
}