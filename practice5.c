#include<stdio.h>

int sum(int a,int b);
int main()
{
int a,b;
a=4,b=5;
int c=sum(a,b);

printf("%d",c);
}

int sum(int a , int b)
{
    return a+b;
}