#include <stdio.h>

float average(float, float, float);

int main() {
    float a, b, c;
    printf("Enter three numbers please: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("Avg of 3 numbers = %.3f\n", average(a, b, c));
    return 0;
}

float average(float a, float b, float c) {
    return (a + b + c) / 3;
}
