#include <stdio.h>

// Program that calculates wind force

// Speed in Knots       Description
// Less than 1          Calm
// 1 - 3                Light air
// 4 - 27               Breeze
// 28 - 47              Gale
// 48 - 63              Storm
// Above 63             Hurricane

int main(void)
{
    int speed;

    printf("\nEnter wind speed (knots): ");
    scanf("%d", &speed);

    if (speed < 1)
        printf("Wind force: Calm");
    else if (speed < 4)
        printf("Wind force: Light Air");
    else if (speed < 28)
        printf("Wind force: Breeze");
    else if (speed < 48)
        printf("Wind force: Gale");
    else if (speed < 64)
        printf("Wind force: Storm");
    else
        printf("Wind force: Hurricane");

    printf("\n\n");
    return 0;
}