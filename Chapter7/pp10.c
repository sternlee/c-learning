#include <stdio.h>

int main(int argc, const char *argv[])
{
    int vowelCount = 0;
    char ch;

    printf("Enter a sentence: ");

    while((ch = getchar()) != '\n')
    {
        if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
        {
            vowelCount += 1;
        }
    }

    printf("Your sentence contains %d vowels.\n", vowelCount);

    return 0;
}
