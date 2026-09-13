#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], sub[50];

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter substring: ");
    scanf("%s", sub);

    char *p = strstr(str, sub);

    if (p != NULL)
        printf("Starting position = %d", p - str);
    else
        printf("Substring not found");

    return 0;
}
