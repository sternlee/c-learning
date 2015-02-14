#include <stdio.h>

int main()
{
    int n, m;

    printf("Enter a two-digit number: ");
    scanf("%d", &n);

    m = n % 10;
    n = n / 10;

    printf("The reversal is: %d\n", m * 10 + n);

    return 0;
}
