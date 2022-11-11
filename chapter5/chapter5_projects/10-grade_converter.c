#include <stdio.h>

/**
 * Using the switch statement write a program that converts a numerical grade into a letter grade:
 *
 * Enter numerical grade: 84
 * Letter grade: B
 *
 * Use the following grading scale:
 * A= 90-100
 * B = 80-89
 * C = 70-79
 * D = 60-69
 * F = 0-59.
 * Print an error message if the grade is larger than 100 or less than O.
 *
 * Hint: Break the grade into two digits, then use a switch statement to test the ten's digit
 */

int main(void)
{
    int num_grade, tens, ones;
    char letter_grade;

    printf("\nEnter numerical grade: ");
    scanf("%d", &num_grade);

    tens = num_grade / 10;
    ones = num_grade % 10;

    printf("-------------------------\n");

    if (num_grade > 100 || num_grade < 0)
    {
        printf("Invalid Grade!\nPlease try again.\n");
    }
    else
    {
        switch (tens)
        {
        case 9:
        case 10:
            letter_grade = 'A';
            break;
        case 8:
            letter_grade = 'B';
            break;
        case 7:
            letter_grade = 'C';
            break;
        case 6:
            letter_grade = 'D';
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            letter_grade = 'F';
            break;

        default:

            break;
        }

        printf("Letter Grade: %c\n", letter_grade);
    }
    printf("\n");
    return 0;
}