#include <stdio.h>

int main()
{
    float income;

    printf("Enter the amount of taxable income: ");
    scanf("%f", &income);

    if (income < 750.00f)
        printf("Tax due: $%.2f\n", income * 0.01f);
    if (income >= 750.00f && income < 2250.00f)
        printf("Tax due: $%.2f\n", (income - 750.00f) * 0.02f + 7.50f);
    if (income >= 2250.00f && income < 3750.00f)
        printf("Tax due: $%.2f\n", (income - 2250.00f) * 0.03f + 37.50f);
    if (income >= 3750.00f && income < 5250.00f)
        printf("Tax due: $%.2f\n", (income - 3750.00f) * 0.04f + 82.50f);
    if (income >= 5250.00f && income < 7000.00f)
        printf("Tax due: $%.2f\n", (income - 5250.00f) * 0.05f + 142.50f);
    if (income >= 7000.00f)
        printf("Tax due: $%.2f\n", (income - 7000.00f) * 0.06f + 230.00);

    return 0;
}
