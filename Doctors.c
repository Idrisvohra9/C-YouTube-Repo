#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[20];
    char surname[20];
    char specialty[20];
    int id;
} Doctor;
// struct Doctor{
//     char name[20];
//     char surname[20];
//     char specialty[20];
//     int id;
// };

int main()
{
    int n;
    printf("Enter the number of doctors: ");
    scanf("%d", &n);
    Doctor *doctors = malloc(n * sizeof(Doctor));

    if (doctors == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of doctor %d: ", i + 1);
        scanf("%s", doctors[i].name);
        printf("Enter the surname of doctor %d: ", i + 1);
        scanf("%s", doctors[i].surname);
        printf("Enter the specialty of doctor %d: ", i + 1);
        scanf("%s", doctors[i].specialty);
        printf("Enter the id of doctor %d: ", i + 1);
        scanf("%d", &doctors[i].id);
    }
    printf("Doctors:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Name: %s\n", doctors[i].name);
        printf("Surname: %s\n", doctors[i].surname);
        printf("Specialty: %s\n", doctors[i].specialty);
        printf("Id: %d\n", doctors[i].id);
    }
    free(doctors);
    return 0;
}