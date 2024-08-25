// #include<stdio.h>
// int main()
// {
// int myNumber[4]={2,4,6,8};
// int i;
// for ( i = 0; i < 4; i++)
// {
//     printf("%d\n",myNumber[i]);
// }


// return 0;
// }
#include<stdio.h>
int main()
{
int myNumbers[]={10,20,30,40,500,10};
int length;
length= sizeof (myNumbers)/sizeof (myNumbers[0]);
int avg;
printf("size = %d\n",sizeof(myNumbers));
printf("length = %d\n",length);
avg = sizeof(myNumbers)/length;
printf("avg =  %d\n",avg);
return 0;
}

