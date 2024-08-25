#include <stdio.h>
int main()
{
    int i = 1, f = 1, n;
    printf("\n Enter the value of n ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        f = f * i;
    }
    printf(" factorial = %d", f);
    return 0;
}