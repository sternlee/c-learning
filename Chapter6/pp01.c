#include <stdio.h>

int main()
{
    int i;
    float num;
    float max;
    num = max = 0;

    for (i = 0; i < 6; i++){
        printf("Enter a number: ");
        scanf("%f", &num);
        if (num > max) max = num;
    }

    printf("The largest number entered was: %.2f\n", max);

    return 0;
}
