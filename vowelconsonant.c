#include <stdio.h>
int main()
{
    char ch;
    printf("\n Enter an alphabet - ");
    scanf("%c", &ch);
    switch (ch)
    {

    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':

        printf("\n %c is a vowel", ch);
        break;
    default:
        printf("\n %c is a consonant", ch);
    }
    return 0;
}