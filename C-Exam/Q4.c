#include <stdio.h>

void main()
{
    int a;
    printf("Enter size of Array : ");
    scanf("%d", &a);

    int array[a];
    int *ptr;

    printf("\n\nEnter Array\n");

    for (int i = 0; i < a; i++)
    {
        printf("array[%d] : ", i);
        scanf("%d", &array[i]);
        array[i] = array[i] * array[i];
    }
    ptr = &array;

    printf("\n\nSquare of Each Element : ");

    for (int i = 0; i < a; i++)
        printf("%d\t", *((ptr + i)));
}
