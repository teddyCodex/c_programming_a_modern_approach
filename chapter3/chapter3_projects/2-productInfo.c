#include <stdio.h>

int main(void)
{
    int item_num, mm, dd, yy;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_num);

    printf("Enter unit price: ");
    scanf(" %f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%2d/%2d/%4d", &mm, &dd, &yy);

    printf("\nItem \t\tUnit \t\tPurchase\n\t\tPrice\t\tDate\n");
    printf("%d\t\t$%6.2f\t\t%d/%d/%d\n", item_num, unit_price, mm, dd, yy);

    return 0;
}