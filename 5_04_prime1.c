#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, flag = 1, start = 7, end = 200;

    for (n = start; n <= end; n++)
    {
        flag = 1;
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1 && n > 0)
        {
            printf("\nThe number %d is prime", n);
        }
    }
}
