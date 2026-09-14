#include <stdio.h>
int main()
{
    int zone, speed, limit, fine;
    printf("Enter zone type: ");
    scanf("%d", &zone);
    printf("Enter speed: ");
    scanf("%d", &speed);

    switch(zone)
    {
        case 1:
            limit = 30;
            break;
        case 2:
            limit = 100;
            break;
        case 3:
            limit = 50;
            break;
        default:
            printf("Invalid zone");
            return 0;
    }
    fine = 0;

    if (speed > limit)
    {
        fine = 1000;

        if (speed > limit + 20)
            fine = fine * 2;
    }
    printf("Final fine = Rs. %d", fine);
    return 0;
}
