#include <stdio.h>

int main()
{
    int partOne, partTwo, partThree;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d)%d-%d", &partOne, &partTwo, &partThree);

    printf("You entered %d.%d.%d\n", partOne, partTwo, partThree);

    return 0;
}
