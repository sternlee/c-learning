#include <stdio.h>

int main()
{
    int n, m, rem, gcd;

    printf("Enter a fraction: ");
    scanf("%d/%d", &n, &m);

    gcd = n;

    rem = m / gcd;
    while (rem != 0){
        m = gcd;
        gcd = rem; 
        rem = m % gcd;
    }

    n = n / gcd;
    m = m / gcd;

    printf("In lowest term: %d/%d\n", n, m);
    
    return 0;
}
