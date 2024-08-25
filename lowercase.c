#include<stdio.h>
int main()
{
    char ch;
    printf("\n Enter a letter ");
    scanf("%c",&ch);
    // range of lower case is 97 to 122 (ASCII value)
    if (ch<=122 && ch>=97)
    {
        printf("\n %c is a lower case",ch);
    }
    else
    {
        printf("\n %c is not a lower case",ch);
    }
    
    return 0;
}