#include <stdio.h>
#include <string.h>
void main()
{
    char x[50], y[50];
    int diff;

    puts("Enter 1st word : ");
    gets(x);
    puts("Enter 2nd word : ");
    gets(y);

    diff = strcmp(x, y);
    printf("\nThe difference %d", diff);
    diff = strcmpi(x, y); // i = Ignore case
    printf("\nThe difference %d", diff);
}