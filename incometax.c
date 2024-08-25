#include <stdio.h>
int main()
{
    float tax = 0, income;
    printf(" Enter your income - \n");
    scanf("%f", &income);
    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);       // why we are using tax = tax + ... here
        // printf("\n tax = %f", tax);
    }
    if (income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.2 * (income - 500000);
        // printf("\n tax = %f", tax);
    }
    if (income >= 1000000)
    {
        tax = tax + 0.3 * (income - 1000000);
    }
    printf("\n tax = %f", tax);

    return 0;
}