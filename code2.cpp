#include <stdio.h>

int main() {
    float entry, fsc, score;

    printf("Enter Entry Test Score: ");
    scanf("%f", &entry);

    printf("Enter FSc Percentage: ");
    scanf("%f", &fsc);

    score = (entry * 0.5) + (fsc * 0.5);

    if (score >= 80)
        printf("Admission: Computer Science");
    else if (score >= 65)
        printf("Admission: Software Engineering");
    else if (score >= 50)
        printf("Admission: Information Technology");
    else
        printf("Rejected");

    return 0;
}
