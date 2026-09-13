#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], text[50];
    int pos, i;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter text: ");
    scanf("%s", text);

    printf("Enter position: ");
    scanf("%d", &pos);

    for(i = strlen(str); i >= pos; i--)
        str[i + strlen(text)] = str[i];

    for(i = 0; text[i] != '\0'; i++)
        str[pos + i] = text[i];

    printf("Result = %s", str);

    return 0;
}
