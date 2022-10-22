/*Program accepts date from user in one format and prints in another format */

#include <stdio.h>

int main(void)
{
	int mm, dd, yy;

	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%2d/%2d/%4d", &mm, &dd, &yy);
	printf("You entered the date %4d%02d%02d\n", yy, mm, dd);

	return 0;
}
