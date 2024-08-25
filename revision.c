#include<stdio.h>
int main()
{
int n,f=1;
printf("The valur of n - ");
scanf("%d",&n);
do
{
    f=f*n;
    n--;
    n--;

} while (n>=1);

    printf("\n %d",f);
printf("Rajat");
return 0;
}