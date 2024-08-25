#include <stdio.h>
int main()
{
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    float avg;
    int sum = 0;
    int i;
    int maximum, minimum;
    float length;
    length = sizeof(ages) / sizeof(ages[0]);
    for (i = 0; i < 8; i++)
    {
        sum += ages[i];
    }
    avg = sum / length;
    // printf("sum = %d\n",sum);
    printf("Average age = %.2f", avg);
    for (i = 1; i < 7; i++)
    {
        maximum = max(maximum, ages[i]);
        minimum = min(minimum, ages[i]);
    }
    printf("\nMaximum age = %d\n", maximum);
    printf("Minimum age = %d", minimum);

    return 0;
}