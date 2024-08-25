// #include<stdio.h>
// int main()
// {
// int myNumbers[4]={25,50,75,100};
// int i;
// int *ptr=myNumbers;
// for ( i = 0; i < 4; i++)
// {
//     printf("%d\n",*(i+ptr));
// }

// return 0;
// }

#include <stdio.h>
int main()
{
    int arr[2][3] = {{2, 4, 6}, {1, 3, 5}};
    int i, j;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
        {
            printf("%d \n ", arr[i][j]);
        }

    return 0;
}