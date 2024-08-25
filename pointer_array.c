#include<stdio.h>
int main()
{
int myNumber[5] = {25,50,75,100,200};
int i;
for ( i = 0; i < 5; i++)
{
    printf("%p\n ",&myNumber[i]);
}
printf("%d",sizeof(myNumber));
return 0;
}