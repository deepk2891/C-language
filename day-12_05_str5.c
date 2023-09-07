#include <stdio.h>
#include <string.h>
void main()
{
    char x[50];
    int i;
    puts("Enter the 1st string x : ");
    gets(x);
    // for(i=0;x[i]!=NULL;i++)
    // for (i = 0; x[i] != NULL; i++)
    for (i = 0; x[i] != '\0'; i++) // NULL = '\0'
    {
    }
    printf("\nThe length of string = %d", i);
}
