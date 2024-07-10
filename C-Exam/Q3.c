#include <stdio.h>
void rev(char *str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }

    int a = len / 2;
    for (int i = 0; i < a; i++)
    {
        char b = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = b;
    }
}

int main()
{
    char st[100];

    printf("Enter A String: ");
    scanf("%s", st);

    rev(st);

    printf("Reversed String: %s\n", st);
}
