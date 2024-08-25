#include <stdio.h>
int main()
{
    int f = 1, n;
    printf("\n n = ");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        f = f * i;
    }
    printf("\n factorial = %d", f);
    return 0;
}
 