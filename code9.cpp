#include<stdio.h>
int main()
{
    float bill, discount;
    int hour, member;

    printf("Enter bill amount: ");
    scanf("%f", &bill);

    printf("Enter hour: ");
    scanf("%d", &hour);

    printf("Are you a member? (1/0): ");
    scanf("%d", &member);

    discount = 0;

    if (hour >= 15 && hour <= 17)
        discount = 20;

    if (member == 1)
        discount = discount + 10;

    if (discount > 25)
        discount = 25;

    bill = bill - (bill * discount / 100);

    printf("Final bill = Rs. %.2f", bill);

    return 0;
}
