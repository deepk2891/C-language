#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, sum = 0;
    puts("Enter any number to check perfect : ");
    scanf("%d", &n);

    // for (i = 1; i <= n / 2; i++)
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        printf("\nThe number %d is perfect", n);
    }
    else
    {
        printf("\nThe number %d is not perfect", n);
    }
}