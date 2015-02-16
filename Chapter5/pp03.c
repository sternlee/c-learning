#include <stdio.h>

int main()
{
    int shares, price;
    float total, commission1, commission2;

    printf("Enter number of shares traded: ");
    scanf("%d", &shares);
    printf("Enter price per share: ");
    scanf("%f", &price);

    total = shares * price;

    // original broker
    if (total < 2500.00f)
       commission1 = 30.00f + .017f * total;
    else if (total < 6250.00f)
       commission1 = 56.00f + .0066f * total;
    else if (total < 20000.00f)
       commission1 = 76.00f + .0034f * total;
    else if (total < 50000.00f)
       commission1 = 100.00f + 0.0022f * total;
    else if (total < 500000.00f)
       commission1 = 155.00f + .0011f * total;
    else
       commission1 = 255.00f + 0.0009f * total;

    if (commission1 < 39.00f)
        commission1 = 39.00f;

    // rival broker
    if (shares < 2000)
        commission2 = 33.00f + 0.03 * shares;
    else
        commission2 = 33.00f + 0.02 * shares;

    printf("Original broker's commission is: %.2f\n", commission1);
    printf("Rival broker's commission is: %.2f\n", commission2);

    return 0;
}
