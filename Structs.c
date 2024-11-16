#include <stdio.h>
#include <string.h>
struct Person {
    char name[50];
    int age;
};

int main(){
    struct Person person;
    // person.name = "idris";
    strcpy(person.name, "Idris");
    person.age = 25;
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    return 0;
}