#include <stdio.h>

main()
{
    int a, b, c;

    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter b number: ");
    scanf("%d", &b);
    printf("Enter c number: ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("a is max");
        }
        else
        {
            printf("c is max");
        }
    }
    else
    {
        if (b > c)
        {
            printf("b is max");
        }
        else
        {
            printf("c is max");
        }
    }
}