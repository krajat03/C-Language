#include <stdio.h>
int main()
{
    int marks;
    printf("\n tell me your marks ");
    scanf("%d", &marks);
    if (marks >= 90 && marks <= 100)
    {
        printf("\n Grade = A");
    }

    else if (marks >= 80 && marks <= 90)
    {
        printf("\n Grade = B");
    }
    else if (marks >= 70 && marks <= 80)
    {
        printf("\n Grade = C");
    }

    else if (marks >= 60 && marks <= 70)
    {
        printf("\n Grade = D");
    }

    else if (marks < 60)
    {
        printf("\n Grade = F");
    }

    return 0;
}