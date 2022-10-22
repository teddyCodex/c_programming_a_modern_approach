#include <stdio.h>

int main(void)
{
    int prefix, group, publisher, item_num, check;

    printf("\nISBN Authenticity Check\n************************\nEnter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &group, &publisher, &item_num, &check);

    printf("GSI Prefix: %d\nGroup Identifier: %d\nPublisher Code: %d\nItem Number: %d\nCheck Digit: %d\n\n", prefix, group, publisher, item_num, check);

    return 0;
}