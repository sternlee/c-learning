#include <stdio.h>

int main()
{
    int i1, i2, i3, i4, i5, i6, sum1;
    int j1, j2, j3, j4, j5, j6, sum2;
    
    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &j1, &i2, &j2, &i3, &j3, &i4, &j4, &i5, &j5, &i6, &j6);

    sum1 = i1 + i2 + i3 + i4 + i5 + i6;
    sum2 = j1 + j2 + j3 + j4 + j5 + j6;

    printf("Check digit: %d\n", 9 - (((sum1 + sum2 * 3) - 1) % 10));

    return 0;
} 
