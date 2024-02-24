#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int year = 2024; /* integer */
    printf("HELLO\nWORLD\n");
    printf("%d", year);

    char myLetter = 'A'; /* character */
    char myName[5] = "Jorge"; /* array: string of 5 characters */
    char myCity[] = "Madrid"; /* array: string of an undefined number of characters */
    int AGE = 31;
    double weight = 80.0;
    double height = 175.75;

    printf("\nHappy new year: %d.\n", year);
    printf("my name is %s and I am %d years old.\n", myName, AGE);
    printf("I live in %s.\n", myCity);
    printf("%s\n", "and is a great city!");
    printf("I am %fcm tall\n", height);

    AGE = 32;
    printf("next year, I will be %d years old.\n", AGE);

    year = 2025;
    printf("happy new year: %d\n", year);

    printf("some math operations:\n");
    printf("sum: %f\n", 5 + 4.5);
    printf("susbtraction: %f\n", 5 - 4.5);
    printf("multiplication: %f\n", 5 * 4.5);
    printf("division: %f\n", 5 / 4.5);
    printf("NOTICE: %f\n", 5 / 4);
    printf("NOTICE: %d\n", 5 / 4); /* rounds down the decimal part of the number */

    printf("power: %f\n", pow(4, 3));
    printf("square root: %f\n", sqrt(32));
    printf("round up: %f\n", ceil(2.646));
    printf("round floor: %f\n", floor(2.646));

    const int someVariable = 8; /* this constant can not be changed */
    
    /* double someNumber;
    printf("Enter some number: ");
    scanf("%lf", &someNumber); // make the user enter a value and store it in a variable
    printf("This is what you entered: %f", someNumber); */

    /* char name[20];
    printf("\nEnter a full name: ");
    scanf("%s", name); // this will get the characters until a space (" ")
    printf("The name you entered is: %s", name); */

    char anotherName[20];
    printf("\nEnter another full name: ");
    fgets(anotherName, 20, stdin); // Stores in a string (array of characters) from standard input.
    // Notice that the enter added in the end to finish adding characters will be consider also as a character
    printf("The name you entered is: %s", anotherName);

    return 0;
}
