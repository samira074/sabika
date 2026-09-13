#include <stdio.h>
#include <string.h>

void permute(char str[], int left, int right)
{
    if (left == right)
    {
        printf("%s\n", str);
        return;
    }

    for (int i = left; i <= right; i++)
    {
        char temp = str[left];
        str[left] = str[i];
        str[i] = temp;

        permute(str, left + 1, right);

        temp = str[left];
        str[left] = str[i];
        str[i] = temp;
    }
}

int main()
{
    char str[20];

    printf("Enter elements: ");
    scanf("%s", str);

    printf("Permutations are:\n");
    permute(str, 0, strlen(str) - 1);

    return 0;
}
