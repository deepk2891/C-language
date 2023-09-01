#include <stdio.h>
#define s1 3
#define s2 4
void main()
{
    int a[s1][s2], i, j;

    for (i = 0; i < s1; i++)
    {
        for (j = 0; j < s2; j++)
        {
            printf("Enter the ele : ");
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nThe 2d Array is\n");
    for (i = 0; i < s1; i++)
    {
        for (j = 0; j < s2; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}