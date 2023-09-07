#include <stdio.h>
#include <string.h>
void main()
{
    char x[50], y[50];
    puts("Enter the 1st word x : ");
    gets(x);
    puts("Enter the 2nd word y : ");
    gets(y);

    strcat(y, x); // string concatenate
    puts(y);
}