#include <stdio.h>
#include <string.h>

char GETCHAR(char str[], int n)
{
    return str[n];
}

void PUTCHAR(char str[], int n, char c)
{
    str[n] = c;
}

int LENGTH(char str[])
{
    return strlen(str);
}

int POS(char str1[], char str2[])
{
    char *p = strstr(str1, str2);

    if (p == NULL)
        return -1;

    return p - str1;
}

void CONCAT(char str1[], char str2[])
{
    strcat(str1, str2);
}

void SUBSTRING(char str1[], int i, int m, char str2[])
{
    int j;

    for (j = 0; j < m; j++)
        str2[j] = str1[i + j];

    str2[j] = '\0';
}

void DELETE(char str[], int i, int m)
{
    int j;

    for (j = i; str[j + m] != '\0'; j++)
        str[j] = str[j + m];

    str[j] = '\0';
}

void INSERT(char str1[], char str2[], int i)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int j;

    for (j = len1; j >= i; j--)
        str1[j + len2] = str1[j];

    for (j = 0; j < len2; j++)
        str1[i + j] = str2[j];
}

int COMPARE(char str1[], char str2[])
{
    return strcmp(str1, str2);
}

int main()
{
    char str1[100], str2[50], sub[50];

    printf("Enter string 1: ");
    scanf("%s", str1);

    printf("Enter string 2: ");
    scanf("%s", str2);

    printf("GETCHAR = %c\n", GETCHAR(str1, 0));

    printf("LENGTH = %d\n", LENGTH(str1));

    printf("POS = %d\n", POS(str1, str2));

    CONCAT(str1, str2);
    printf("CONCAT = %s\n", str1);

    SUBSTRING(str1, 0, 3, sub);
    printf("SUBSTRING = %s\n", sub);

    printf("COMPARE = %d\n", COMPARE(str1, str2));

    return 0;
}
