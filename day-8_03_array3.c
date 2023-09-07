#include <stdio.h>
#define SIZE 60
void main()
{
    int a[SIZE], i, sum = 0, n;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the number of a[%d] : ", i);
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("\nDisplay \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\nThe total = %d", sum);
}