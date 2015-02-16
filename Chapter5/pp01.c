#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0 && num <= 9) printf("The number %d has 1 digit.\n", num);
    if (num >= 10 && num <= 100) printf("The number %d has 2 digits.\n", num);
    if (num >= 100 && num <=999) printf("The number %d has 3 digits.\n", num);
    if (num >= 1000 && num <= 9999) printf("The number %d has 4 digits.\n", num);
    if (num >= 10000) printf("The number %d has 5 or more digits.\n", num);

    return 0;
}
