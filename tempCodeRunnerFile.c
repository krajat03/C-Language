#include <stdio.h> 
#include <math.h>

    int main() {
        
    int n;
    printf("Enter the value : ");
    scanf("%d", &n);

    int i = 1;
    do { 
    printf("%d", i);
    i++;
    } while(i<=n);

    return 0;
}

