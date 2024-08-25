#include<stdio.h>
int main()
{
int l,b,area,perimeter;
printf("\n The length = ");
scanf("%d",&l);
printf("\n The breadth = ");
scanf("%d",&b);
area= l*b;
perimeter = 2*(l+b);
printf("\n The area is = %d",area);
printf("\n The perimeter is = %d",perimeter);


return 0;
}