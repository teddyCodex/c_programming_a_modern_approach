#include <stdio.h>

/**
 *  Departure Time     Arrival Time
 *      8:00 a.m          10:16 a.m
 *      9:43 a.m          11:52 a.m
 *      11:19 a.m         1:31 p.m
 *      12:47 p.m         3:00 p.m
 *      2:00 p.m          4:08 p.m
 *      3:45 p.m          5:55 p.m
 *      7:00 p.m          9:20 p.m
 *      9:45 p.m          11:58 p.m
 * */

/**
 * Write a program that asks user to enter a time (expressed in hours and minutes, using the 24hour clock).
 * Program then displays lhe departure and arrival times for lhe flight whose departure time is closest to that entered by tbe user:
 * Enter a 24-hour time: 13:15
 * Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
 *
 * Hint: Convert the input into a time expressed in minutes since midnight. and compare it to the departure times,
 * also expressed in minutes since midnight. For example, 13:15 is 13 x 60 + 15 = 795 minutes since midnight.
 * which is closer to 12:47 p.m. (767 minutes since midnight) than to any of the other departure times.
 */

int main(void)
{
    int dt1, dt2, dt3, dt4, dt5, dt6, dt7, dt8, at1, at2, at3, at4, at5, at6, at7, at8, time, dt_hours, dt_mins, at_hours, at_mins;

    // convert all departure times to minutes since midnight.
    dt1 = 8 * 60 + 0;
    dt2 = 9 * 60 + 43;
    dt3 = 11 * 60 + 19;
    dt4 = 12 * 60 + 47;
    dt5 = 14 * 60 + 0;
    dt6 = 15 * 60 + 45;
    dt7 = 19 * 60 + 0;
    dt8 = 21 * 60 + 45;

    // convert all arrival times to minutes since midnight.
    at1 = 10 * 60 + 16;
    at2 = 11 * 60 + 52;
    at3 = 13 * 60 + 31;
    at4 = 15 * 60 + 0;
    at5 = 16 * 60 + 8;
    at6 = 17 * 60 + 55;
    at7 = 21 * 60 + 20;
    at8 = 23 * 60 + 58;

    // printf("%d %d %d %d %d %d %d %d\n", dt1, dt2, dt3, dt4, dt5, dt6, dt7, dt8);
    printf("\nEnter time in 24-hour format: ");
    scanf("%d:%d", &dt_hours, &dt_mins);

    time = dt_hours * 60 + dt_mins;
    // printf("%d\n", time);

    if (time - dt1 < dt2 - time)
    {
        dt_hours = dt1 / 60;
        dt_mins = dt1 % 60;
        at_hours = at1 / 60;
        at_mins = at1 % 60;
    }
    else if (time - dt2 < dt3 - time)
    {
        dt_hours = dt2 / 60;
        dt_mins = dt2 % 60;
        at_hours = at2 / 60;
        at_mins = at2 % 60;
    }
    else if (time - dt3 < dt4 - time)
    {
        dt_hours = dt3 / 60;
        dt_mins = dt3 % 60;
        at_hours = at3 / 60;
        at_mins = at3 % 60;
    }
    else if (time - dt4 < dt5 - time)
    {
        dt_hours = dt4 / 60;
        dt_mins = dt4 % 60;
        at_hours = at4 / 60;
        at_mins = at4 % 60;
    }
    else if (time - dt5 < dt6 - time)
    {
        dt_hours = dt5 / 60;
        dt_mins = dt5 % 60;
        at_hours = at5 / 60;
        at_mins = at5 % 60;
    }
    else if (time - dt6 < dt7 - time)
    {
        dt_hours = dt6 / 60;
        dt_mins = dt6 % 60;
        at_hours = at6 / 60;
        at_mins = at6 % 60;
    }
    else if (time - dt7 < dt8 - time)
    {
        dt_hours = dt7 / 60;
        dt_mins = dt7 % 60;
        at_hours = at7 / 60;
        at_mins = at7 % 60;
    }
    else
    {
        dt_hours = dt8 / 60;
        dt_mins = dt8 % 60;
        at_hours = at8 / 60;
        at_mins = at8 % 60;
    }

    printf("-------------------------------------------------------\n");
    if (dt_hours == 12)
    {
        printf("Closest departure is %02d:%02d p.m, arriving at %02d:%02d p.m\n", dt_hours, dt_mins, at_hours - 12, at_mins);
    }
    else if (dt_hours < 12)
    {
        if (at_hours < 12)
            printf("Closest departure is %02d:%02d a.m, arriving at %02d:%02d a.m\n", dt_hours, dt_mins, at_hours, at_mins);
        else
            printf("Closest departure is %02d:%02d a.m, arriving at %02d:%02d p.m\n", dt_hours, dt_mins, at_hours - 12, at_mins);
    }
    else
    {
        printf("Closest departure is %02d:%02d p.m, arriving at %02d:%02d p.m\n", dt_hours - 12, dt_mins, at_hours - 12, at_mins);
    }

    printf("\n");
    return 0;
}