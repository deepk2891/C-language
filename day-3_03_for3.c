#include <stdio.h>
#include <conio.h>
void main()
{
    int i;
    for (i = 10; i >= 1; i--)
    {
        printf("\ni=%d", i);
    }
    printf("\n------value of i outside loop = %d", i);
}