#include <stdio.h>
#include <string.h>
void main()
{
    char x[50], y[50];
    puts("Enter the 1st word x : ");
    gets(x);
    puts("Enter the 2nd word y: ");
    gets(y);
    if (strcmp(x, y) == 0) // String comparison
    {
        printf("\nBoth strings are same");
    }
    else
    {
        printf("\nStrings are different");
    }
    if (strcmpi(x, y) == 0) // Here "i" stands for ignore case
    {
        printf("\nBoth strings are same");
    }
    else
    {
        printf("\nStrings are different");
    }
}