#include <stdio.h>
#include <conio.h>
void main()
{
    int ch, a, b;

    printf("\nEnter 1 to Add\nEnter 2 to Sub\nEnter 3 to multiply\nEnter your choice : ");
    scanf("%d", &ch);

    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    if (ch == 1)
    {
        printf("\nThe Addtition of %d + %d = %d", a, b, (a + b));
    }
    if (ch == 2)
    {
        printf("\nThe Subtraction of %d - %d = %d", a, b, (a - b));
    }
    if (ch == 3)
    {
        printf("\nThe Multiplication of %d * %d = %d", a, b, (a * b));
    }
}
