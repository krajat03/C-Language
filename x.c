#include <stdio.h>

int main() {
    int i = 0;
    for (;;) {  // Infinite loop
        if (i == 10)
            break;  // Exit the loop when i equals 10
        printf("%d ", ++i);
    }
    return 0;
}
