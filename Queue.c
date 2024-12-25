#include <stdio.h>
#include <stdbool.h>
int main()
{
    printf("Enter the size of queue: ");
    int size;
    scanf("%d", &size);

    int option;
    int f = -1;
    int r = -1;
    int element;
    int queue[size];
    while (true)
    {
        printf("1) Insertion \n2) Deletion \n3) Display \n4) Exit \nEnter your choice: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
        {
            if (r == size - 1)
            {
                printf("**** Queue is full ****\n");
            }
            else
            {
                if (r == -1)
                {
                    r++;
                    f++;
                }
                else
                {
                    r++;
                }
                printf("--> Enter element: ");
                scanf("%d", &element);
                queue[r] = element;
            }
            break;
        }
        case 2:
        {
            if (r == -1)
            {
                printf("**** Queue is empty ****\n");
            }
            else if (f > r)
            {
                printf("**** Queue is empty ****\n");
                f = 0;
                r = -1;
            }

            else
            {
                printf("Deleting -> %d \n", queue[f]);
                f++;
            }
            break;
        }
        case 3:
        {
            if (f <= r)
            {
                printf("Elements are: ");
                for (int i = f; i <= r; i++)
                {
                    printf("%d ", queue[i]);
                }
                printf("\n");
            }
            else
            {
                printf("**** Queue is empty ****\n");
            }
            break;
        }
        case 4:
        {
            printf("Exiting....\n");
            return 0;
        }
        default:
            printf("### Invalid input, try again \n");
            break;
        }
    }
}