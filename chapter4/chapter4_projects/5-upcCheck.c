/* Program that computes a Universal Product Code check digit */

#include <stdio.h>

int main(void)
{
	long upc;
	int check, sum1, sum2, total;
	int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;

	printf("Enter the first 11 digits of a UPC: ");
	scanf("%ld", &upc);

	// This program will be refactored in good time lol
	d11 = upc % 10;
	upc /= 10;
	d10 = upc % 10;
	upc /= 10;
	d9 = upc % 10;
	upc /= 10;
	d8 = upc % 10;
	upc /= 10;
	d7 = upc % 10;
	upc /= 10;
	d6 = upc % 10;
	upc /= 10;
	d5 = upc % 10;
	upc /= 10;
	d4 = upc % 10;
	upc /= 10;
	d3 = upc % 10;
	upc /= 10;
	d2 = upc % 10;
	d1 = upc / 10;

	// printf("%d\n", d11);
	// printf("%d %d %d %d %d %d %d %d %d %d %d\n", d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11);

	sum1 = d1 + d3 + d5 + d7 + d9 + d11;
	sum2 = d2 + d4 + d6 + d8 + d10;
	total = 3 * sum1 + sum2;
	check = 9 - ((total - 1) % 10);

	// printf("sum 1 = %d\n", sum1);
	// printf("sum 2 = %d\n", sum2);
	// printf("total = %d\n", total);
	printf("Check Digit is %d\n", check);

	return 0;
}
