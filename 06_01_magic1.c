#include <stdio.h>
#include <conio.h>
void main()
{
    int n, n1, sum = 0, r;

    printf("Enter the number : ");
    scanf("%i", &n);

    n1 = n;

    while (n != 0)
    {
        r = n % 10;
        sum += r;
        n /= 10;
        if (n == 0 && sum >= 10)
        {
            n = sum;
            sum = 0;
        }
    }
    if (sum == 1)
    {
        printf("\nThe number %d is magic", n1);
    }
    else
    {
        printf("\nThe number %d is not magic", n1);
    }
}
