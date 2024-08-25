// #include <stdio.h>
// int main()
// {
//     int a;
//     int *ptr = &a;

//     //char a = 97;
//     printf("Value of variable 'a' is = ");
//     scanf("%d",&a);

//     printf("%p\n",&a); //Address of variable 'a' is
//     printf("%p",ptr); //Value at address
//     // printf("%p\n", &a);
//     return 0;
// }

#include<stdio.h>
int main()
{
int *myNum;
printf("Enter an integer: ");
scanf("%d",&myNum);
printf("%p",&myNum);

return 0;
}