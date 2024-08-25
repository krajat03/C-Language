#include <stdio.h>
int main()
{
    int n;
    printf("Multiplication of - ");
    scanf("%d",&n);
    printf("\n");
    printf("Multiplication table of %d is \n" , n);

    int i = 1;
    int ans;
    do
    {
        ans = n * i;
        printf("%d" " x " "%d" " = " "%d" "\n",n,i,ans);
        i++;

    } while (i <= 10);

    return 0;
}