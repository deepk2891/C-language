#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    char ch;

    do
    {
        printf("\nEnter 'a' to Addition\nEnter 's' to sub\nEnter 'm' to multiply\nEnter 'd' to devide\nEnter x to exit\nEnter your choise : ");
    X:
        scanf("%c", &ch);

        if (ch == 'a' || ch == 'A' || ch == 's' || ch == 'S' || ch == 'm' || ch == 'M' || ch == 'd' || ch == 'D' || ch == 'x' || ch == 'X')
        {
            printf("Enter a : ");
            scanf("%d", &a);
            printf("Enter b : ");
            scanf("%d", &b);
        }
        else
        {
            goto X;
        }

        switch (ch) // -32768 to +32768
        {
        case 'a':
        case 'A':
            printf("\nThe Addition of %d + %d = %d", a, b, (a + b));
            break;
        case 's':
        case 'S':
            printf("\nThe Subtraction of %d - %d = %d", a, b, (a - b));
            break;
        case 'm':
        case 'M':
            printf("\nThe Multiplication of %d * %d = %d", a, b, (a * b));
            break;
        case 'd':
        case 'D':
            printf("\nThe Division of %d / %d = %d", a, b, (a / b));
            break;
        case 'x':
        case 'X':
            printf("\nThank You ..!!!");
        default: // else of else-if ladder.
            printf("\nInvalid choice!");
        }

    } while (ch != 'x' && ch != 'X');
}
