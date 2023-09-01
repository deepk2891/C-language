#include <stdio.h>
#define S 6
void main()
{
    int a[S] = {1,
                55,
                1,
                1,
                88,
                7},
        i, sel, count = 0;

    printf("Enter the element to be searched :  ");
    scanf("%d", &sel);

    printf("\nThe search result is : \n");
    for (i = 0; i < S; i++)
    {
        if (a[i] == sel)
        {
            printf("\nThe element %d found at a[%d]", sel, i);
            count++;
        }
    }

    if (count == 0) // !count
    {
        printf("\nelement %d not found", sel);
    }
    else
    {
        printf("\ntotal number of occurrences = %d", count);
    }
}
