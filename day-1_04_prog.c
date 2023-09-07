#include <stdio.h>
#include <conio.h>
void main()
{
    char var;
    puts("Enter any char : ");
    scanf("%c", &var);
    var = getchar();
    printf("\nThe entered char = %c", var);
}