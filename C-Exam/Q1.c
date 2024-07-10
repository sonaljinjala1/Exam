#include <stdio.h>

int main()
{
    char vowel;

    printf("Enter a Character: ");
    scanf("%c", &vowel);

    switch (vowel)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("%c is a vowel.\n", vowel);
        break;
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%c is a vowel.\n", vowel);
        break;
    default:
        printf("%c is a Consonant.\n", vowel);
    }
}