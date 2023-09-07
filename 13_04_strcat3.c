#include <stdio.h>
#include <string.h>
void main()
{
    char x[50], y[50];
    int i, j;

    puts("Enter 1st word : ");
    gets(x);
    puts("Enter 2nd word : ");
    gets(y);

    for (i = 0; x[i] != '\0'; i++)
        ;
    for (j = 0; y[j] != '\0'; j++, i++) //  '\0'  =   NULL
    {
        x[i] = y[j];
    }
    x[i] = '\0';
    printf("\nThe concatenated string is = %s", x);
}