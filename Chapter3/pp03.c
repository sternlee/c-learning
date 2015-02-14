#include <stdio.h>

int main()
{
    int gsiPrefix, groupIdentifier, publisherCode, itemNumber, checkDigit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsiPrefix, &groupIdentifier, &publisherCode, &itemNumber, &checkDigit);

    printf("GSI Prefix: %d\n", gsiPrefix);
    printf("Group Identifier: %d\n", groupIdentifier);
    printf("Publisher Code: %d\n", publisherCode);
    printf("Item Number: %d\n", itemNumber);
    printf("Check Digit: %d\n", checkDigit);

    return 0;
}
