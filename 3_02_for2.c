#include <stdio.h>
#include <conio.h>
void main()
{
    int i, start, end, n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Enter the start : ");
    scanf("%d", &start);
    printf("Enter the end : ");
    scanf("%d", &end);
    /*
    5 x 1 = 5
    5 x 2 = 10
    ...
    */
    for (i = start; i <= end; i++) // i++  ->  i=i+1
    // initialization(it will happen only once);condition;inc dec;
    {
        printf("\n%d x %d = %d", n, i, n * i);
    }
}