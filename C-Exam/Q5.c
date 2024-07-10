#include <stdio.h>

struct Car
{
    char model[50];
    int year;
    float price;
};

int main()
{
    int Car;

    printf("Enter the number of cars: ");
    scanf("%d", &Car);

    struct Car cars[Car];

    for (int i = 0; i < Car; i++)
    {
        printf("Enter details for Car %d:\n", i + 1);
        printf("Model: ");
        scanf("%s", cars[i].model);
        fflush(stdin);
        printf("Year: ");
        scanf("%d", &cars[i].year);
        fflush(stdin);
        printf("Price: ");
        scanf("%f", &cars[i].price);
    }

    printf("\nDetails Of All CAR:\n");
    for (int i = 0; i < Car; i++)
    {
        printf("Car %d\n", i + 1);
        printf("Model: %s\n", cars[i].model);
        printf("Year: %d\n", cars[i].year);
        printf("Price: %.2f\n", cars[i].price);
        printf("\n");
    }
}