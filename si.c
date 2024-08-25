#include <stdio.h>
int main()
{
    int p, r, t;
    float si;
    printf("p= ");
    scanf("%d", &p);
    printf("\n r= ");
    scanf("%d", &r);
    printf("\n t= ");
    scanf("%d", &t);
    si = p * r * t / 100;
    printf("\n si= %f", si);
    return 0;
}