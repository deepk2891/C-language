#include <stdio.h>
#include <string.h>
void main()
{
    char x[50], y[50];
    int diff;

    puts("Enter 1st word : ");
    gets(x);

    // y=x;
    strcpy(y, x);
    puts(y);
}