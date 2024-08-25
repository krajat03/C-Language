#include<stdio.h>
#include<string.h>
int main()
{
char txt1[20]="Hello";
char  txt2[]=" World!";
strcat(txt1,txt2);
printf("%s",txt1);
return 0;
}