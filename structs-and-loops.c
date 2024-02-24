#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Jim"); // allows to asign strings to string fields on structs
    strcpy(student1.major, "Business");

    struct Student student2;
    student2.age = 22;
    student2.gpa = 3.2;
    strcpy(student2.name, "Pam"); // allows to asign strings to string fields on structs
    strcpy(student2.major, "Art");

    printf("%s\n", student1.name);
    printf("%s\n", student2.name);

    int index = 1;
    while (index <= 5) {
        printf("%d\n", index);
        index++;
    };

    do { // this code will be executed before checking if the while condition is true
        printf("%d\n", index);
        index++;
    } while (index <= 6);

    

    return 0;
}