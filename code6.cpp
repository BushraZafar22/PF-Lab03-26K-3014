#include <stdio.h>

int main()
{
    int people;
    int weight;

    printf("Enter number of people: ");
    scanf("%d", &people);
    printf("Enter total weight: ");
    scanf("%d", &weight);

    if (people > 10 && weight > 1000)
    {
        printf("Entry denied due to both people limit and overweight.");
    }
    else if (weight > 1000)
    {
        printf("Entry denied due to overweight.");
    }
    else if (people > 10)
    {
        printf("Entry denied due to exceeding people limit.");
    }
    else
    {
        printf("Elevator can operate normally.");
    }
    return 0;
}
