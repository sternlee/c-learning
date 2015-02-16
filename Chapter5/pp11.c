#include <stdio.h>

int main()
{
    int tenth, digit, num;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    tenth = num / 10;
    digit = num % 10;

    printf("You entered the number ");

    switch(tenth){
        case 1:
            switch(digit){
                case 0:
                    printf("ten\n");
                    return;
                case 1:
                    printf("eleven\n");
                    return;
                case 2:
                    printf("twelve\n");
                    return;
                case 3:
                    printf("thirteen\n");
                    return;
                case 4:
                    printf("fourteen\n");
                    return;
                case 5:
                    printf("fifteen\n");
                    return;
                case 6:
                    printf("sixteen\n");
                    return;
                case 7:
                    printf("seventeen\n");
                    return;
                case 8:
                    printf("eighteen\n");
                    return;
                case 9:
                    printf("nineteen\n");
                    return;
                default:
                    break;
            }
        case 2:
            printf("twenty");
            break;
        case 3:
            printf("thirty");
            break;
        case 4:
            printf("forty");
            break;
        case 5:
            printf("fifty");
            break;
        case 6:
            printf("sixty");
            break;
        case 7:
            printf("seventy");
            break;
        case 8:
            printf("eighty");
            break;
        case 9:
            printf("ninty");
            break;
        default:
            break;
    }

    switch(digit){
        case 0:
            printf("\n");
            break;
        case 1:
            printf("-one\n");
            break;
        case 2:
            printf("-two\n");
            break;
        case 3:
            printf("-three\n");
            break;
        case 4:
            printf("-four\n");
            break;
        case 5:
            printf("-five\n");
            break;
        case 6:
            printf("-six\n");
            break;
        case 7:
            printf("-seven\n");
            break;
        case 8:
            printf("-eight\n");
            break;
        case 9:
            printf("-nine\n");
            break;
        default:
            break;
    }

    return 0;
}
