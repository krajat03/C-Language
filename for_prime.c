#include <stdio.h>
int main()
{
    int n, i , x=0;
    
    printf("\n Enter the value of n = ");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            x = 1;
            break;
        }
    }
    if (x == 1 && n!=2) 
    printf("\n It is not a prime number");
    else
    {
        printf("\n It is a prime no.");
    }
    return 0;
}