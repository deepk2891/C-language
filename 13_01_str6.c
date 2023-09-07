#include <stdio.h>
#include <string.h>

void main()
{
    char x[100], temp;
    int i, len, j;

    puts("Enter any name: ");
    gets(x);
    len = strlen(x);

    puts("Reverse form is\n");
    for (i = 0, j = len - 1; i < len / 2; i++, j--)
    {
        temp = x[i];
        x[i] = x[j];
        x[j] = temp;
    }

    puts(x);
}
