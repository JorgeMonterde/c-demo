#include<stdio.h>

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

    return 0;
}