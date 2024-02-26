#include <stdio.h>
#include <stdlib.h>

void changeVariable(int *variablePointer, int newValue) { // void is a no-type
    *variablePointer = newValue;
}

int *createVariable(){
    int *someVariable;
    someVariable = malloc(sizeof(int));
    *someVariable = 123;
    return someVariable;
}

void createAnotherVariable(){ // void is a no-type
    int anotherVariable = 8723;
}

int main ()
{
    // RAM: Random Access Memory
    int age = 31;
    int * pAge = &age; // pointer variable that stores the memory address of the variable "age"
    double gpa = 3.4;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;
    

    printf("age: %p - %p\n", &age, pAge); // "%p" refers to pointer and "&age" is the pointer of the variable "age"
    // a pointer is a type of data for memory addresses
    printf("gpa: %p - %p\n", &gpa, pGpa);
    printf("grade: %p - %p\n", &grade, pGrade);

    // dereferencing pointers:
    printf("dereference age variable: %d\n", *pAge);
    printf("dereference age variable: %d\n", *&*&*&*&age); // referencing and dereferencing

    // write file:
    FILE * fpointer = fopen("employees.txt", "w"); // FILE is some sort of data type, so "fpointer" is storing the memory address of that file
    fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting");
    fclose(fpointer); // important to close the file

    // append to a file:
    fopen("employees.txt", "a");
    fprintf(fpointer, "\nKelly, Customer service,");
    fclose(fpointer);

    // read files:
    char line[255];
    fopen("employees.txt", "r");

    fgets(line, 255, fpointer);
    printf("%s\n", line); // first line of file
    fgets(line, 255, fpointer);
    printf("%s\n", line); // second line of file

    fclose(fpointer); // important to close the file

    // pass a pointer to a funtion:
    int myVariable = 16;
    printf("my variable value is: %d\n", myVariable);
    int newValue = 8797;

    changeVariable(&myVariable, newValue);
    printf("my variable value is: %d", myVariable);

    // atention:
    int *pNumber;
    pNumber = createVariable();
    printf("\nsome number: %d", *pNumber);
    createAnotherVariable();
    printf("\nsome number: %d", *pNumber);

/*     // this will give an error:
    int n = 34;
    void p = *n; // a void pointer can not have an address as it is unkown how to read the data
 */

    return 0;
}