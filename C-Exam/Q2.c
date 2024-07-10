#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of : ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("a[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    int a = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > a)
        {
            a = arr[i];
        }
    }

    printf("The largest Element: %d\n", a);
}