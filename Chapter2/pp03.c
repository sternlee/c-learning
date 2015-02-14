#include <stdio.h>

#define PI 3.14

int main(void)
{
    int r;
    printf("Please enter the radius: ");
    scanf("%d", &r);

    float volume;
    volume = (4.0f / 3.0f) * PI * r * r * r;

    printf("Volume: %.2f\n", volume);
    return 0;
}
