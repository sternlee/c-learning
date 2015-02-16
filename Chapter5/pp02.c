#include <stdio.h>

int main()
{
    int hr, min;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hr, &min);

    if(hr >= 12)
        printf("Equivalent 12-hour time: %d:%d PM\n", (hr - 12), min);
    else
        printf("Equivalent 12-hour time: %d:%d AM\n", hr, min);

    return 0;
}
