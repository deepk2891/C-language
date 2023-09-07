#include <stdio.h>
#include <conio.h>
void main()
{
    int a = 10;
    printf("Enterthe value of a : ");
    scanf("%d", &a);

    if (a < 0)
    {
        printf("%d is negative!", a);
    }
    if (a > 0)
    {
        printf("%d is positive!", a);
    }
    if (a == 0)
    {
        printf("\n %d is zero/null", a);
    }
}