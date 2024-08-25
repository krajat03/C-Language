#include <stdio.h>
void display(); // function prototype
void raw();
void round();

int main()
{
    display(); // function call
    raw();
    round();
    return 0;
}
void display()
{ // function definition
    printf("\n Good Morning");
}
void raw()
{
    printf("\n Good Afternoon");
}
void round()
{
    printf("\n Good night");
}