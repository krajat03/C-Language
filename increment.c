#include<stdio.h>
int main()
{
    // int i;

    // scanf("%d",&i);
    
    // printf("\n The value of i after i++ is %d \n",i++);
    // printf("\n The value of i after i++ is %d \n",i+=10);
    

    int arr[] = {1,3,4};
    //printf("%d+%d+%d = %d", arr[0],arr[1],arr[2], arr[0]+arr[1]+arr[2]);
    int sum =0;
    for(int i=0; i<3; i++){
        sum +=arr[i];
    }
    printf("%d", sum);
    return 0;
}