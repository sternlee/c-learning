#include <stdio.h>

int main()
{
    int n, m, remainder;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n, &m);

    if (n = 0){
        printf("Greatest common divisor: %d\n", m);
    }else if (m = 0){
        printf("Greatest common divisor: %d\n", n);
    }else {
        remainder = m % n;
        while (remainder != 0){
            m = n;
            n = remainder;
            remainder = m % n;
        }
        printf("Greatest common divisor: %d\n", n);
    }

    return 0;
}
