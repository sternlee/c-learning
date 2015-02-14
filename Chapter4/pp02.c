#include <stdio.h>

int main()
{
    int n, m, k;

    printf("Enter a three-digit number: ");
    scanf("%d", &n);

    m = n % 10;

    k = n / 100;

    n = n % 100;

    n = n / 10;

    printf("The reversal is: %d\n", m * 100 + n * 10 + k);

    return 0;
}
