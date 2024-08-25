#include <stdio.h>
int main()
{

    int n, a, pin;
    printf("\n Welcome to the XYZ ATM \n Choose an option \n For cash enqiry press 1 \n For cash withdrawl press 2");
    printf("\n Enter your desired option:- ");
    scanf("%d", &n);
    if (n == 1 || pin == 5050)
    {
        printf("\n You have choose option 1 \n Enter your pin:- ");
        scanf("%d", &pin);
        printf("\n Your bank balance is 52458513");
        printf("\n Thanks");
    }
    else if (n == 2 || pin == 5050)
    {
        printf("\n You have choose cash withdrawl option");
        printf("\n Enter your Four digit pin ");
        scanf("%d", &pin);

        printf("\n Enter amount- ");
        scanf("%d", &a);
        printf("\n Your transaction is sucessful");
        printf("\n Thanks");

        if (pin != 5050)
        {
            printf("\n Wrong pin");
        }
    }

    return 0;
}