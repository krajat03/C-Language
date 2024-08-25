#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("\n The value of n = ");
scanf("%d",&n);
for (i=0;i<=n;i++)
{
    sum +=i;
}
    printf("\n The sum  = %d ",sum);
return 0;
}