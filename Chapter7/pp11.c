#include <stdio.h>

int main(int argc, const char *argv[])
{
    // Enter a first and last name: Lloyd Fosdick
    // Fosdick, L

    char space;
    char fname;
    char lname;
    char initial;
    char tmp;

    printf("Enter a first and last name: ");

    while((fname = getchar()) == ' ')
        space = fname;

    initial = fname;

    while(fname != ' ')
        fname = getchar();

    while((lname = getchar()) == ' ')
        space = lname;

    while(lname != ' ' && lname != '\n'){
        printf("%c", lname);
        lname = getchar();
    }

    printf(", %c\n", initial);

    return 0;
}



