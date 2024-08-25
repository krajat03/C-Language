#include <stdio.h>
int main()
{
    int num1, num2, num3, num4;
    printf("\n Enter the value of Num1 = ");
    scanf("%d", &num1);

    printf("\n Enter the value of Num2 = ");
    scanf("%d", &num2);

    printf("\n Enter the value of Num3 = ");
    scanf("%d", &num3);

    printf("\n Enter the value of Num4 = ");
    scanf("%d", &num4);

    if (num1 > num2 && num1 > num3 && num1 > num4)
    {
        printf("\n num1 %d is greater", num1);
    }

    else if (num2 > num1 && num2 > num3 && num2 > num4)
    {
        printf("\n num2 %d is greater", num2);
    }

    else if (num3 > num1 && num3 > num2 && num3 > num4)
    {
        printf("\n num3 %d is greater", num3);
    }
    else
    {
        printf("\n num4 %d is greater", num4);
    }

    return 0;
}