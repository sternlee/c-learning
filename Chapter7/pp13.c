#include <stdio.h>

int main(int argc, const char *argv[])
{
    // Enter a sentence: It was deja vu all over again.
    // Average word length: 3.4

    int space;
    int allChar;
    float result;
    char ch;

    printf("Enter a sentence: ");

    while((ch = getchar()) != '\n'){
        if(ch == ' '){
            space += 1;
        }
        allChar += 1;
    }

    //printf("Number of spaces: %d\n", space);
    //printf("Number of allChar: %d\n", allChar);
    
    result = (allChar - space) / (space + 1.0);
    printf("Average word length: %.1f\n", result);

    return 0;
}
