#include <stdio.h>

int main()
{
    int n1, n2, n3, n4;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    int max, min;
    max = n1;
    min = n1;

    if(max < n2)
        max = n2;
    if(max < n3)
        max = n3;
    if(max < n4)
        max = n4;

    if(min > n2)
        min = n2;
    if(min > n3)
        min = n3;
    if(min > n4)
        min = n4;

    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);

    return 0;
}
