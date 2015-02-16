#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        if (i % 2 == 0 && i * i <= n){
            printf("%d\n", i * i);
        }
    }

    return 0;
}
