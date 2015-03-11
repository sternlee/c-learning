#include <stdio.h>

int main()
{
    int start, total;

    printf("Enter number of days in month: ");
    scanf("%d", &total);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);

    int i, j;

    for (j = 0; j < start - 1; j++){
        printf("   ");
    }

    for (i = 1; i <= total; i++){
        printf("%2d ", i);
        if ((start + i - 1) % 7 == 0) printf("\n");
    }
    
    printf("\n");

    return 0;
}
