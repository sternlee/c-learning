#include <stdio.h>

int main()
{
    int num, oct, a, b, c, d, e;
    // printf("Enter a number between 0 and 32767: ");
    // scanf("%d", &num);
    // printf("In octal, your number is: %o\n", num);
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);

    e = num % 8;

    num = num / 8;

    d = num % 8;

    num = num / 8;

    c = num % 8;

    num = num / 8;

    b = num % 8;

    num = num / 8;

    a = num % 8;

    oct = a * 10000 + b * 1000 + c * 100 + d * 10 + e * 1;

    printf("In octal, your number is: %05d\n", oct);

    return 0;
}
