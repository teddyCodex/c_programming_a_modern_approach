// Program that calculates a broker's commission
/**
 * under $2,500        =   $30 + 1.7%
 * $2,500 - $6,250     =   $56 + 0.66%
 * $6,250 - $20,000    =   $76 + 0.34%
 * $20,000 - $50,000   =   $100 + 0.22%
 * $50,000 - $500,000  =   $155 + 0.11%
 * Over $500,000       =   $255 + 0.09%
 */

// Program update - ask user to input value of shares and price per share
// $33 + 3cents per share for less than 2000 shares
// $33 + 2cents per share for more than 2000 shares

#include <stdio.h>

int main(void)
{
    float brokerCommission, value, shares, pricePerShare, rivalBrokerCommission;

    printf("\nEnter value of shares: ");
    scanf("%f", &shares);
    printf("Enter price per share: ");
    scanf("%f", &pricePerShare);

    value = shares * pricePerShare;

    if (shares < 2000)
        rivalBrokerCommission = 33.00f + (0.03f * shares);
    else
        rivalBrokerCommission = 33.00f + (0.02f * shares);

    if (value < 2500.00f)
        brokerCommission = 30.00f + (0.017f * value);
    else if (value < 6250.00f)
        brokerCommission = 56.00f + (0.0066f * value);
    else if (value < 20000.00f)
        brokerCommission = 76.00f + (0.0034f * value);
    else if (value < 50000.00f)
        brokerCommission = 100.00f + (0.0022f * value);
    else if (value < 500000.00f)
        brokerCommission = 155.00f + (0.0011f * value);
    else
        brokerCommission = 255.00f + (0.0009f * value);

    if (brokerCommission < 39.00f)
        brokerCommission = 39.00f;

    printf("----------------------------------\n");
    printf("Broker Commission: $%.2f\n", brokerCommission);
    printf("Rival Broker Commission: $%.2f", rivalBrokerCommission);

    printf("\n\n");
    return 0;
}