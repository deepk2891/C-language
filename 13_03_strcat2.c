#include <stdio.h>
#include <string.h>
void main()
{
    char x[50], y[50];

    puts("Enter 1st word : ");
    gets(x);
    puts("Enter 2nd word : ");
    gets(y);

    strcat(x, y);
    puts(x);
    puts(y);
}