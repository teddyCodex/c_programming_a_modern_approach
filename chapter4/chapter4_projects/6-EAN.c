/* Program that computes a Universal Product Code check digit */

#include <stdio.h>

int main(void)
{
	long ean;
	int check, sum1, sum2, total;
	int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12;

	printf("Enter the first 12 digits of an EAN: ");
	scanf("%ld", &ean);

	// This program will be refactored in good time lol
	d12 = ean % 10;
	ean /= 10;
	d11 = ean % 10;
	ean /= 10;
	d10 = ean % 10;
	ean /= 10;
	d9 = ean % 10;
	ean /= 10;
	d8 = ean % 10;
	ean /= 10;
	d7 = ean % 10;
	ean /= 10;
	d6 = ean % 10;
	ean /= 10;
	d5 = ean % 10;
	ean /= 10;
	d4 = ean % 10;
	ean /= 10;
	d3 = ean % 10;
	ean /= 10;
	d2 = ean % 10;
	d1 = ean / 10;

	// printf("%d\n", d11);
	// printf("%d %d %d %d %d %d %d %d %d %d %d %d\n", d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12);

	sum1 = d2 + d4 + d6 + d8 + d10 + d12;
	sum2 = d1 + d3 + d5 + d7 + d9 + d11;
	total = 3 * sum1 + sum2;
	check = 9 - ((total - 1) % 10);

	// printf("sum 1 = %d\n", sum1);
	// printf("sum 2 = %d\n", sum2);
	// printf("total = %d\n", total);
	printf("Check Digit is %d\n", check);

	return 0;
}
