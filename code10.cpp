#include <stdio.h>

int main()
{
    int heartRate;
    float temperature;

    printf("Enter heart rate: ");
    scanf("%d", &heartRate);

    printf("Enter body temperature: ");
    scanf("%f", &temperature);

    if (heartRate > 120 || temperature > 39)
    {
        printf("Critical - Immediate Attention");
    }
    else if (heartRate >= 100 && heartRate <= 120 &&
             temperature >= 37.5 && temperature <= 39)
    {
        printf("Urgent");
    }
    else   
    {
        printf("Normal - Wait in Queue");
    }

    return 0;
}
