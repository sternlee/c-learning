#include <stdio.h>

int main(int argc, const char *argv[])
{
    int x, tmp;
    int fac = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &x);
    tmp = x;

    do{
        fac *= x;
        x -= 1;
    }while(x > 1);

    printf("Factorial of %d: %d\n", tmp, fac);

    return 0;
}
