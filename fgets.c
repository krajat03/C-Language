#include<stdio.h>
int main()
{
char fullname[30];
printf("Enter your full name - ");
fgets(fullname,sizeof(fullname),stdin);
printf("You name is %s ",fullname);
return 0;
}