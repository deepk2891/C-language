#include <stdio.h>
#include <conio.h>
void main()
{
    int i, n, sum, count = 0;

    // Loop through numbers from 1 to 32000
    for (n = 1; n <= 32000; n++)
    {
        sum = 0;
        // Find the sum of proper divisors
        for (i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                sum += i;
            }
        }
        // Check if the number is a perfect number
        if (sum == n)
        {
            printf("%d\n", n);
            count++;
        }
    }
    printf("-----The total counts of perfect numbers = %d", count);
}