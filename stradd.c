#include<stdio.h>
#include<string.h>

int main(void){
    char str[] = "hello";
    char str2[] = "hi";

    printf("%p\n", &str);

    for (int i = 0; i < sizeof(str); i++)
    {
        printf("%p\n", &str[i]);
    }
}