#include <stdio.h>

#define MONTHLY_INTEREST_RATE_FACTOR (1.0f / 1200.0f)

int main(void)
{
    float loan, i, payment, balance;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &i);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    balance = loan * (1 + i * MONTHLY_INTEREST_RATE_FACTOR) - payment;
    printf("Balance remaining after first payment: %.2f\n", balance);

    balance = balance * (1 + i * MONTHLY_INTEREST_RATE_FACTOR) - payment;
    printf("Balance remaining after second payment: %.2f\n", balance);

    balance = balance * (1 + i * MONTHLY_INTEREST_RATE_FACTOR) - payment;
    printf("Balance remaining after third payment: %.2f\n", balance);

    return 0;
}
