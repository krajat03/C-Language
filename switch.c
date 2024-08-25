#include <stdio.h>
int main()
{
    int rating;
    printf("Enter your rating (1-5)\n");
    scanf("%d", &rating);
    switch (rating)
    {
    case 1:
        printf("\n Need improvement");
        break;
    case 2:
        printf("\n Average");
    case 3:
        printf("\n Good");
        break;
    case 4:
        printf("\n Very good");
        break;
    case 5:
        printf("\n Excellent");
        break;

    default:
        printf("\n Invalid rating");
        break;
    }

    return 0;
}