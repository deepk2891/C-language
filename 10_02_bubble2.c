#include <stdio.h>
#define SIZE 7
void main()
{
    int a[SIZE], i, j, temp;

    for (i = 0; i < SIZE; i++)
    {
        printf("Enter the ele : ");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < SIZE - 1; i++) // passes
    {
        for (j = 0; j < SIZE - 1; j++) // Internal check
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }

        printf("\nPass no. %d", i + 1);

        for (j = 0; j < SIZE; j++)
        {
            printf("%d, ", a[j]);
        }
    }

    printf("\nSorted elements\n");

    for (i = 0; i < SIZE; i++)
    {
        printf("%d, ", a[i]);
    }
}