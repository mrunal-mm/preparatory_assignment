#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareStrings(const void *a, const void *b)
{
    return strcmp((const char *)a, (const char *)b);
}

void display(char *names[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("\n%s", names[i]);
    }
}

int main(int argc, char const *argv[])
{
    char nameOfStudents[10][50];

    printf("Enter students Name: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%s", &nameOfStudents[i]);
    }

    printf("names are:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("\n%s", nameOfStudents[i]);
    }

    qsort(nameOfStudents, 10, sizeof(nameOfStudents[0]), compareStrings);

    printf("names  after are:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("\n%s", nameOfStudents[i]);
    }
    
    return 0;
}