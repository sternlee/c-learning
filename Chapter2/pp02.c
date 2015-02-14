#include <stdio.h>

#define PI 3.14

int main(void)
{
    float volume;
    int radius = 10;

    volume = (4.0f / 3.0f) * PI * radius * radius * radius;

    printf("Volume: %.2f\n", volume);

    return 0;
}
