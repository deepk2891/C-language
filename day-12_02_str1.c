#include <stdio.h>
void main()
{
    char x[50];

    puts("Enter your name :");
    gets(x);
    // scanf("%[^\n]s",x);
    printf("\nYour form submitted successfully %s !!!", x);
}
