#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("Enter the value of  a: ");
    scanf("%d", &a);

    if (a < 0)
    {
        printf("\nThe %d is Nnegative", a);
    }
    else if (a > 0)
    {
        printf("\nThe %d is positive", a);
    }
    else
    {
        printf("\n%d is zero", a);
    }
}