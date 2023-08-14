#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 1;
    do
    {
        printf("%d ", i++);
    } while (i <= 5);
    printf("The vaue of i outside while = %d", i);
}