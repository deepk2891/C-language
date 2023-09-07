#include <stdio.h>
#define s1 3
#define s2 4
void main()
{
    int a[s1][s2] = {{1, 3, 1, 1},
                     {2, 3, 77, 2},
                     {3, 3, 8, 88}},
        i, j, sel, count = 0;

    /*
    for(i=0;i<s1;i++)
    {
        for(j=0;j<s2;j++)
        {
            printf("Enter the element : ");
            scanf("%d",a[i][j]);
        }
    }
    */

    printf("Enter the elment to be searched : ");
    scanf("%d", &sel);

    printf("\nEnter the element %d founf at a[%d][%d] ", sel, i, j);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < s2; j++)
        {
            if (a[i][j] == sel)
            {
                printf("\nThe elemnt %d found at a[%d][%d]", sel, i, j);
                count++;
            }
        }
        printf("\n");
    }

    if (count == 0) // count==0
    {
        printf("\nelement %d not found", sel);
    }
    else
    {
        printf("\ntotal number of occurrences = %d", count);
    }
}
