#include <stdio.h>
int main()
{
    int a, n, t,sum= 0;
    printf("\n The multiplication table of ");
    scanf("%d", &n);
    for (a = 1; a <= 10; a++)
    {
        t = n*a;
        sum = sum +t;
    printf("\n %d*%d = %d ",n,a,t);
    }
    {
    printf("\n sum = %d ",sum);
   

    }
    


    return 0;
}