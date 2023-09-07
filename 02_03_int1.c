#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    float ans;
    // double d=sin(0);
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);

    ans = (float)a / b;
    printf("The devision of %d and %d = %.2f", a, b, ans);
}