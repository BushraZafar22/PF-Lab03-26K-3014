#include <stdio.h>
int main() {
    int member, slot;
    float fee;
    printf("Enter Membership (1-3): ");
    scanf("%d", &member);
    printf("Enter Slot (1-Morning, 2-Evening): ");
    scanf("%d", &slot);
    switch(member) {
        case 1:
            fee = 2000;
            break;
        case 2:
            fee = 3500;
            break;
        case 3:
            fee = 2500;
            break;
        default:
            printf("Invalid Membership");
            return 0;
    }
    switch(slot) {
        case 1:
            fee = fee - (fee * 0.15);
           break;
        case 2:
            break;
        default:
            printf("Invalid Slot");
            return 0;
    }
    printf("Final Monthly Fee = %.2f", fee);
    return 0;
}
