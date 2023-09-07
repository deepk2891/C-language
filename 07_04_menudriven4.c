#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    char ch;
TARGET: // LABEL
    printf("\nEnter 'a' to Addition\nEnter 's' to sub\nEnter 'm' to multiply\nEnter 'd' to devide\nEnter your choise : ");
    // flushall(); // write this while scanning char and strings.
    scanf("%c", &ch);

    if (ch == 'a' || ch == 's' || ch == 'm' || ch == 'd')
    {
        printf("Enter a : ");
        scanf("%d", &a);
        printf("Enter b : ");
        scanf("%d", &b);
    }
    else
    {
        printf("\nPlease enter valid choice!!!");
        goto TARGET;
    }

    switch (ch) // -32768 to +32768
    {
    case 'a':
        printf("\nThe Addition of %d + %d = %d", a, b, (a + b));
        break;
    case 's':
        printf("\nThe Subtraction of %d - %d = %d", a, b, (a - b));
        break;
    case 'm':
        printf("\nThe Multiplication of %d * %d = %d", a, b, (a * b));
        break;
    case 'd':
        printf("\nThe Division of %d / %d = %d", a, b, (a / b));
        break;
    default: // else of else-if ladder.
        printf("\nInvalid choice!");
    }
}