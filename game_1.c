#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, ngusses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    // printf("\n the number is %d", number);
    printf("\n Guess the number between 1 to 100 - ");
    do
    {
        scanf("%d", &guess);

        if (number > guess)
        {
            printf("\n Guess bigger number - ");
        }
        else if (number < guess)
        {
            printf("\n Guess the smaller number - ");
        }
        else
        {
            printf("\n Hurrah! You have guessed");
            printf("\n You have guessed in %d attempts", ngusses);
        }
        ngusses++;
    } 
    
    
    while (number != guess);

    return 0;
}