#include<stdio.h>
int main()
{
    int x,y,z;
    printf("\n Enter x = ");
    scanf("%d",&x);
    printf("\n Enter y = ");
    scanf("%d",&y);
    printf("\n before: swapping x = %d, y = %d",x,y);
    y=x;
    x=y;
    y=z;
    printf("\n after swapping x= %d,y = %d",x,y);
    return 0;
}