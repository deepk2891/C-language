#include <stdio.h>
#include <math.h>
#define SIZE 60 // symbolic constant
void main()
{
    double d = sin(0);
    int a[SIZE], i, max, min, n, sum;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the number of a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    sum = max = min = a[0];

    for (i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        if (max > a[i])
        {
            min = a[i];
        }

        sum += a[i];
    }

    printf("\nThe Max = %d and Min %d = %d and the average = %f", max, min, (float)sum / n);
}