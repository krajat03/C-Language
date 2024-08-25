#include <stdio.h>
#include <math.h>
int main()
{
    // int a=6,b=3,c=0;

    // c=pow(a,b);
    // printf("%d",c);

    int num;
    printf("the value of num = ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("\n xzcsz");
    }
    else if (num % 2 == 0)
    {
        printf("\n It is an even number");
    }

    else
    {
        printf("\n It is an odd number");
    }
}

return 0;
}