#include<stdio.h>
int main()
{
char carname[]="Mercedez";
int i;
int length;
length = sizeof(carname)/sizeof(carname[0]);
for ( i = 0; i < length; i++)
{
    printf("%c",carname[i]);
}

return 0;
}