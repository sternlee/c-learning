#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
    int x;
    double y = 1.0;
    double sqrt;
    double diff;
    double num;

    printf("Enter a positive number: ");
    scanf("%d", &x);

    do{
        num = x / y;
        sqrt = (y + num) / 2;
        y = sqrt;
        num = x / sqrt;
        diff = fabs(num - y);
    }while(diff > 0.00001);

    //printf("y:%f\n", y);
    //printf("x/y:%f\n", num);

    printf("Square root: %.5f\n", sqrt);

    return 0;
}
