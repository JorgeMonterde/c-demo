#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main ()
{
    double num1;
    double num2;
    char operator;
    printf("Enter first number: ");
    scanf("%lf", &num1); // access the address of num1
    printf("\nEnter an operator: ");
    scanf(" %c", &operator); // " %c" should have the space (" ") before the "%"
    printf("\nEnter second number: ");
    scanf("%lf", &num2);

    if (operator == '+') {
        printf("\nAnswer: %f", num1 + num2);
    } else if (operator == '-') {
        printf("\nAnswer: %f", num1 - num2);
    } else if (operator == '*') {
        printf("\nAnswer: %f", num1 * num2);
    } else if (operator == '/') {
        printf("\nAnswer: %f", num1 / num2);
    } else {
        printf("\nInvalid operator");
    }

    switch (operator) {
        case '+':
            printf("\nAnswer: %f", num1 + num2);
            break;
        case '-':
            printf("\nAnswer: %f", num1 - num2);
            break;
        case '*':
            printf("\nAnswer: %f", num1 * num2);
            break;
        case '/':
            printf("\nAnswer: %f", num1 / num2);
            break;
        default :
            printf("\nInvalid operator");
    }


    return 0;
}