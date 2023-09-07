#include <stdio.h>
#include <math.h>
#define SIZE 60
void main()
{
    double d = sin(0);
    int a[SIZE], i, max, min, n, sum = 0;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the number of a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];

    for (i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        if (min < a[i])
        {
            min = a[i];
        }
        sum += a[i];
    }

    printf("\nThe Max = %d and Min = %d and the Average is = %f", max, min, (float)sum / n);
}