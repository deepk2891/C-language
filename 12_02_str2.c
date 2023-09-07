#include <stdio.h>
#include <string.h>
void main()
{
    char x[50];
    puts("Enter the name : ");
    gets(x); // get string
    // scanf("%[^\n]s",x);
    printf("\nThe Entered name is %s", x);
    strupr(x); // uppercase
    printf("\nThe Uppercase name is %s", x);
    strlwr(x); // lowercase
    printf("\nThe Lowercase name is %s", x);
    strrev(x); // string reverse
    printf("\nThe Reverse name is %s", x);
    printf("\nThe length of name is %d", strlen(x));
}