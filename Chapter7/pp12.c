#include <stdio.h>

int main(int argc, const char *argv[])
{
    // Enter an expression: 1+2.5*3
    // Value of expression: 10.5
    // No operator takes precedence over any other operator
    
    float result;
    float num;
    char ch;

    printf("Enter an expression: ");
    scanf("%f", &result);

    while((ch = getchar()) != '\n'){
        switch(ch){
            case '+':
                scanf("%f", &num);
                result += num;
                break;
            case '-':
                scanf("%f", &num);
                result -= num;
                break;
            case '*':
                scanf("%f", &num);
                result *= num;
                break;
            case '/':
                scanf("%f", &num);
                result /= num;
                break;
            default:
                break;
        }
    }
    
    printf("Value of expression %.2f\n", result);

    return 0;
}
