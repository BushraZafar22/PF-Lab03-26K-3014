#include <stdio.h>
int main() {
    int type;
    float balance, interest = 0;

    printf("Enter Account Type (1-3): ");
    scanf("%d", &type);
    printf("Enter Account Balance: ");
    scanf("%f", &balance);

    switch(type) {
        case 1:
            if (balance > 100000)
                interest = balance * 0.04;
            else
                interest = balance * 0.02;
            break;

        case 2:
            interest = 0;
            break;

        case 3:
            interest = balance * 0.08;
            break;

        default:
            printf("Invalid Account Type");
    }
    if (type >= 1 && type <= 3)
        printf("Annual Interest = %.2f", interest);
    return 0;
}
