#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16, row1, row2, row3, row4, column1, column2, column3, column4, diagonal1, diagonal2;

    printf("Enter the numbers 1 to 16 in any order: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);

    row1 = n1 + n2 + n3 + n4;
    row2 = n5 + n6 + n7 + n8;
    row3 = n9 + n10 + n11 + n12;
    row4 = n13 + n14 + n15 + n16;

    column1 = n1 + n5 + n9 + n13;
    column2 = n2 + n6 + n10 + n14;
    column3 = n3 + n7 + n11 + n15;
    column4 = n4 + n8 + n12 + n16;

    diagonal1 = n1 + n6 + n11 + n16;
    diagonal2 = n4 + n7 + n10 + n13;

    printf("\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n\n", n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16);
    printf("Row Sums: %d %d %d %d\nColumn Sums: %d %d %d %d\nDiagonal Sums: %d %d\n\n", row1, row2, row3, row4, column1, column2, column3, column4, diagonal1, diagonal2);

    return 0;
}

// 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1