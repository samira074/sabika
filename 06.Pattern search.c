#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], pattern[50];

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter pattern: ");
    scanf("%s", pattern);

    char *p = strstr(str, pattern);

    if (p != NULL)
        printf("Pattern found at index %d", p - str);
    else
        printf("Pattern not found");

    return 0;
}
