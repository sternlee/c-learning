#include <stdio.h>

int main()
{
    int grade, tenth;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    tenth = grade / 10;

    switch(tenth){
        case 9:
            printf("Letter grade: A\n");
            break;
        case 8:
            printf("Letter grade: B\n");
            break;
        case 7:
            printf("Letter grade: C\n");
            break;
        case 6:
            printf("Letter grade: D\n");
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("Letter grade: F\n");
            break;
        default:
            printf("The numerical grade should be in [0 ~ 100]\n");
            break;
    }

    return 0;
}
