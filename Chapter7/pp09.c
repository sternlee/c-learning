#include <stdio.h>

int main(int argc, const char *argv[])
{
    int hour;
    int min;
    char ch;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &min, &ch);

    if(ch == 'p' || ch == 'P'){
        if(hour == 12){
            printf("Equivalent 24-hour time: 00:%02d\n", min);
        }else{
            printf("Equivalent 24-hour time: %02d:%02d\n", hour + 12, min);
        }
    }else{
        printf("Equivalent 24-hour time: %02d:%02d\n", hour, min);
    }

    return 0;
}
