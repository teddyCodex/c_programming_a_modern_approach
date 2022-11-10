/* Program that computes a Universal Product Code check digit */

#include <stdio.h>

int main(void)
{
	int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, check, sum1, sum2, total;

	printf("\nEnter the first digit: ");
	scanf("%1d", &d1);
	printf("Enter the first group of 5 digits: ");
	scanf("%1d%1d%1d%1d%1d", &d2, &d3, &d4, &d5, &d6);
	printf("Enter the second group of 5 digits: ");
	scanf("%1d%1d%1d%1d%1d", &d7, &d8, &d9, &d10, &d11);
	printf("Enter the last digit: ");
	scanf("%1d", &check);

	sum1 = d1 + d3 + d5 + d7 + d9 + d11;
	sum2 = d2 + d4 + d6 + d8 + d10;
	total = 3 * sum1 + sum2;
	// check = 9 - ((total - 1) % 10);

	if (check == 9 - ((total - 1) % 10))
		printf("UPC is VALID.\n");
	else
		printf("UPC is INVALID!\n");

	printf("\n");
	return 0;
}
