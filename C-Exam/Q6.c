#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("data.txt", "w");

    if (file != NULL)
    {
        printf(" Your file is created..!\n");
    }
    else
    {
        printf("Your file is  not created..!\n");
    }

    char name[50];
    char course[50];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter student %d name: ", i + 1);
        scanf("%s", name);
        fflush(stdin);
        printf("Enter student %d course: ", i + 1);
        scanf("%s", course);

        fprintf(file, "Student Name: %s, \nCourse: %s\n\n", name, course);
    }

    printf("Your file is create.\n");

    fclose(file);
}