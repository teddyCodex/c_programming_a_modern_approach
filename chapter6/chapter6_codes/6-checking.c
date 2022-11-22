/* Program that balances a checkbook */

#include <stdio.h>

int main(void)
{
    int cmd;
    float balance = 0.00f, debit, credit;

    printf("\n*** UBUNTU6TY9 CHECKBOOK BALANCING PROGRAM ***\n");
    printf("Commands: \n0 = clear\n1 = credit\n2 = debit\n3 = balance\n4 = exit\n");

    for (;;)
    {
        printf("Enter Command: ");
        scanf("%d", &cmd);

        switch (cmd)
        {
        case 0:
            balance = 0.00f;
            break;
        case 1:
            printf("Enter credit amount: ");
            scanf("%f", &credit);
            balance += credit;
            break;
        case 2:
            printf("Enter debit amount: ");
            scanf("%f", &debit);
            balance -= debit;
            break;
        case 3:
            printf("Current balance is: $%.2f\n\n", balance);
            break;
        case 4:
            return 0;
        default:
            printf("\nPlease enter a valid command\n");
            printf("\nCommands: \n0 = clear\n1 = credit\n2 = debit\n3 = balance\n4 = exit\n");
            break;
        }
    }
}