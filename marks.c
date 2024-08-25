#include <stdio.h>
int main()
{
    int physics, chemistry, maths;
    float total;
    printf("\n physics = ");
    scanf("%d", &physics);

    printf("\n chemistry = ");
    scanf("%d", &chemistry);

    printf("\n maths = ");
    scanf("%d", &maths);
    total = (physics + chemistry + maths) / 3;

    if((total < 33  ) || physics < 33 || chemistry < 33 || maths < 33)
    {
        printf("\n You have %f marks, You are fail",total);
    }
    else
    {
        printf("\n You have %f marks, You are promoted",total);
    }
    return 0;
}