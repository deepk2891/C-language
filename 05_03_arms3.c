#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    long int n1, n, digits, start, end, sum, r;

    printf("Enter the start : ");
    scanf("%ld", &start);
    printf("Enter the end : ");
    scanf("%ld", &end);

    for (n1 = start; n1 <= end; n1++)
    {
        n - n1;
        sum = 0;
        digits = 0;
        while (n != 0)
        {
            n /= 10;
            digits++;
        }
        n = n1;
        while (n != 0)
        {
            r = n % 10;
            sum += pow((int)r, digits);
            n /= 10;
        }
        if (n1 == sum)
        {
            printf("%ld", n1);
        }
    }
}