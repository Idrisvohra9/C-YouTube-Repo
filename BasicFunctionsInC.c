#include <stdio.h>

int main(){
    int age = 25;
    float height = 5.84;
    char grade = 'A';

    char name[20] = "Idris";
    printf("Age: %d\n", age);
    printf("Height: %.3f\n", height);
    printf("Grade: %c\n", grade);
    printf("Name: %s\n", name);

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("You entered: %d\n", number);
}