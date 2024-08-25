#include <stdio.h>
int main()
{
    float c, f;
    printf("Temprature is = ");
    scanf("%f", &c);
    f = ((c * 9) / 5)+ 32;
    printf("\n Temprature in Farenheit is %f ", f);
    return 0;
}