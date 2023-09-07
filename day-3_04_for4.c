#include <stdio.h>
#include <conio.h>
void main()
{
    int i;
    for (i = 0; i <= 10; i++)
    {
        printf("\ni=%d", i);
    }
    printf("\n------value of i outside of loop is %d", i);
}