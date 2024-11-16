#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Student
{
    char name[100];
    int marks;
    bool isPassed;
};
int main()
{
    struct Student student[3];

    strcpy(student[0].name, "John");
    student[0].marks = 90;
    student[0].isPassed = true;

    strcpy(student[1].name, "Alice");
    student[1].marks = 80;
    student[1].isPassed = false;

    strcpy(student[2].name, "Bob");
    student[2].marks = 70;
    student[2].isPassed = true;

    for (int i = 0; i < 3; i++)
    {
        printf("Name: %s\nMarks: %d\nPassed: %s\n", student[i].name, student[i].marks, student[i].isPassed ? "Yes" : "No");
        printf("---------------------------------\n");
    }
    return 0;
}