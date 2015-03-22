#include <stdio.h>

int main(int agrc, const char *agrv[])
{
    // Print a list of squared numbers
    
    int i, num;
    char ch;

    printf("Enter a number: ");
    scanf("%d", &num);
    ch = getchar();

    for (i = 1; i < num; i++) {
        printf("%d -> %d\n", i, i * i);
        if ( i%24 == 0) {
            printf("Press enter to continue...");
            ch = getchar();
        }
    }
    return 0;
}
