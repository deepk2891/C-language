#include <stdio.h>
#include <conio.h>
void main()
{
    int ch, a, b;
TARGET:
    printf("\n1 = Addition\n2 = Subtraction\n3 = Multiplication\n4 = Division\nEnter your choice : ");
    scanf("%d", &ch);

    if (ch >= 1 && ch <= 4)
    {
        printf("ENter a : ");
        scanf("%d", &a);
        printf("ENter b : ");
        scanf("%d", &b);
    }
    else
    {
        printf("\nPlease enter choice between 1 to 4");
        goto TARGET;
    }

    switch (ch) // -32768 to +32768
    {
    case 1:
        printf("\nThe Addition of %d + %d = %d", a, b, (a + b));
        break;
    case 2:
        printf("\nThe Subtraction of %d - %d = %d", a, b, (a - b));
        break;
    case 3:
        printf("\nThe Multiplication of %d * %d = %d", a, b, (a * b));
        break;
    case 4:
        printf("\nThe Division of %d / %d = %d", a, b, (a / b));
        break;
    }
}