#include<stdio.h>
int main()
{
int i=1,f=1,n;
printf("\n Enter the value of n ");
scanf("%d",&n);
while (i<=n)
{
    f = f*i;
    i++;
}
printf("\n factorial = %d",f);
return 0;
}