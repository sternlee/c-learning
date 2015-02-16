#include <stdio.h>

int main()
{
    int n;
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12;
    
    printf("Enter the digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);

    int sum1, sum2, check;
    sum1 = i1 + i3 + i5 + i7 + i9 + i11;
    sum2 = i2 + i4 + i6 + i8 + i10;
    check = 9 - ((sum1 * 3 + sum2) - 1) % 10;

    if (i12 == check)
        printf("Valid!\n");
    else
        printf("Invalid!\n");

    return 0;
}
