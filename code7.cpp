#include <stdio.h>
int main()
{
    int policy, age, claim, approved;

    printf("Enter policy status: ");
    scanf("%d", &policy);

    printf("Enter vehicle age: ");
    scanf("%d", &age);

    printf("Enter claim amount: ");
    scanf("%d", &claim);

    if (policy == 1 && age < 10 && claim <= 500000)
        approved = claim;
    else if (policy == 1 && age >= 10 && age <= 15 && claim <= 500000)
        approved = claim / 2;
    else
        approved = 0;

    if (approved > 0)
        printf("Approved claim = Rs. %d", approved);
    else
        printf("Claim rejected.");

    return 0;
}
