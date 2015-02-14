#include <stdio.h>

int main()
{
    int item_no, day, month, year;
    float price;

    printf("Enter item number: ");
    scanf("%d", &item_no);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit\tPurchase\n");
    printf("    \tPrice\tDate\n");
    printf("%d\t$ %.2f\t%02d/%d/%d\n", item_no, price, month, day, year);

    return 0;
}
