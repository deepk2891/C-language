#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int n1, n, digits = 0, r, sum = 0;
    printf("Enter any number : ");
    scanf("%d", &n);

    n1 = n;

    while (n != 0)
    {
        n /= 10;
        digits++;
    }
    n = n1;
    while (n != 0)
    {
        printf("\nn=%d", n);
        r = n % 10;
        printf("\nr=%d", r);
        sum += pow(r, digits);
        printf("\nsum=%d", sum);
        n /= 10;
    }
    if (n1 == sum)
    {
        printf("\nThe number %d is a armstrong number", n1);
    }
    else
    {
        printf("\nThe number %d is not a armstrong number", n1);
    }
}