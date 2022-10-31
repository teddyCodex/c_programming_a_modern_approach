/* Program that computes a Universal Product Code check digit */

#include <stdio.h>

int main(void)
{
	long upc = 6543298765;
	int check, sum1, sum2, total;
	int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;

	// printf("Enter the first 11 digits of a UPC: ");
	// scanf("%ld", &upc);

	d1 = upc / 10;
	printf("%d\n", d1);

	// sum1 = d1 + d3 + d5 + d7 + d9 + d11;
	// sum2 = d2 + d4 + d6 + d8 + d10;
	// total = 3 * sum1 + sum2;
	// check = 9 - ((total - 1) % 10);

	// printf("Check Digit is %d\n", upc);

	return 0;
}
