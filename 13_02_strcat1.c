#include <stdio.h>
#include <string.h>
void main()
{
    char x[50], y[50];
    int i = 0, j = 0;

    puts("Enter 1st word : ");
    gets(x);
    puts("Enter 2nd word : ");
    gets(y);

    // while (x[i] != NULL)
    while (x[i] != '\0')
    {
        i++;
    }
    while (y[j] != '\0')
    {
        x[i++] = y[j++];
    }
    x[i] = '\0';

    printf("\nThe concatenated string = %s", x);
}
