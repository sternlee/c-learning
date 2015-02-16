#include <stdio.h>

int main()
{
    int hour, min, total;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);

    total = hour * 60 + min;

    if (total < (480 + 543) / 2)
        printf("Cloest departure time is 8:00 am, arriving at 10:16 am.\n");
    if (total >= (480 + 543) / 2 && total < (543 + 679) / 2)
        printf("Cloest departure time is 9:43 am, arriving at 11:52 am.\n");
    if (total >= (543 + 679) /2 && total < (679 + 767) / 2)
        printf("Cloest departure time is 11:19 am, arriving at 1:31 pm.\n");
    if (total >= (679 + 767) / 2 && total < (767 + 840) / 2)
        printf("Cloest departure time is 12:47 pm, arriving at 3:00 pm.\n");
    if (total >= (767 + 840) / 2 && total < (840 + 945) / 2)
        printf("Cloest departure time is 2:00 pm, arriving at 4:08 pm.\n");
    if (total >= (840 + 945) / 2 && total < (945 + 1140) / 2)
        printf("Cloest departure time is 3:45 pm, arriving at 5:55 pm.\n");
    if (total >= (945 + 1140) / 2 && total < (1140 + 1305) / 2)
        printf("Cloest departure time is 7:00 pm, arriving at 9:20 pm.\n");
    if (total >= (1140 + 1305) / 2)
        printf("Cloest departure time is 9:45 pm, arriving at 11:58 pm.\n");

    return 0;
}
