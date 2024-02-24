#include <stdio.h>
#include <stdlib.h>

double square (double num); // signature that enables a function with return to be defined below the main function

double cube (double num) // functions with return should be defined above the main function
{
    double result = num * num * num;
    return result;

    printf("\nHello."); // this line is never going to be printed because is below "return"
}

int max (int num1, int num2, int num3)
{
    int result;

    if (num1 >= num2 && num1 >= num3) {
        result = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        result = num2;
    } else {
        result = num2;
    }

    return result;
}

int main () // special function that is called when the file is executed
{
    // create arrays:
    int integersArray[] = {4, 8, 9, 12, 25, 26, 30};
    integersArray[1] = 100;
    printf("%d\n", integersArray[1]);

    double doublesArray[] = {4.5, 8.5, 9.5, 12.5, 25.5, 26.5, 30.5};
    float floatsArray[] = {4.5, 8.5, 9.5, 12.5, 25.5, 26.5, 30.5};

    // "Garbage" values on arrays
    int garbageArray[10]; // the array is declared but not initialized
    printf("%d\n", garbageArray[2]); // the array is filled with garbage from previous values
    garbageArray[0] = 22; // position 0 is asigned
    printf("%d\n", garbageArray[0]); // prints 22
    printf("%d\n", garbageArray[1]); // prints "garbage" values
    printf("%d\n", garbageArray[2]); // prints "garbage" values

    // Avoid garbage values
    int cleanArray[10] = {22}; // the array is declared and initialized
    printf("%d\n", cleanArray[2]); // the array is filled with "0" in not defined positions
    cleanArray[0] = 22; // position 0 is asigned
    printf("%d\n", cleanArray[0]); // prints 22
    printf("%d\n", cleanArray[1]); // prints 0
    printf("%d\n", cleanArray[2]); // prints 0

    char someString[35] = "hello world"; // strings are arrays of characters
    printf("%s", someString);

    sayHi ("Elena", 31);
    sayHi ("John", 25);
    sayHi ("Lisa", 48);

    double number = 3;
    printf("\nThe square of %f is: %f", number, square(number));
    printf("\nThe cube of %f is: %f", number, cube(number));

    int numberOne = 0;
    int numberTwo = 9;
    int numberThree = 2;
    printf("\nWhich number is bigger: %d, %d or %d?\nAnswer: %d", numberOne, numberTwo, numberThree, max(numberOne, numberTwo, numberThree));

    return 0;
}

void sayHi (char name[], int age)
{
    printf("\nHello %s, you are %d", name, age);

}

double square (double num)
{
    double result = num * num;
    return result;

    printf("\nHello."); // this line is never going to be printed because is below "return"
}