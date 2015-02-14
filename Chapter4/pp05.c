#include <stdio.h>

int main()
{
    int n;
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11;
    
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11);

    int sum1, sum2;
    sum1 = i1 + i3 + i5 + i7 + i9 + i11;
    sum2 = i2 + i4 + i6 + i8 + i10;

    printf("Check digit: %d\n", 9 - (((sum1 * 3 + sum2) - 1) % 10));

    return 0;
}
