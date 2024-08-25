#include <stdio.h>
#include <math.h>

int main()
{

        int days;
        printf("enter days in number \n");
        scanf("%d", &days);

        switch (days)
        {

        case 1:
                printf("Monday");
                break;

        case 2:
                printf("Tuesday");
                break;

        case 3:
                printf("Wednesday");
                break;

        case 4:
                printf("Thursday");
                break;

        case 5:
                printf("Friday");
                break;

        case 6:
                printf("Saturday");
                break;

        case 7:
                printf("Sunday");
                break;

        default:
                printf("There were only 7 Days");
        }
        return 0;
}