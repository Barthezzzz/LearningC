// 7. Simple Calculator


#include <stdio.h>

 

int main() 
{

    double num1, num2, result;

    char operator;

 

    // Prompt the user to enter two numbers and an operator (+, -, *, /)
    printf("Enter 2 numbers and an operator: (+, -, *, /): ");

    // Read the inputs
    scanf("%lf %lf %c", &num1, &num2, &operator);

    printf("The first number you entered is: %lf\n", num1);
    printf("The second number you entered is: %lf\n", num2);
    printf("The operator you entered is: %c\n", operator);

    // Perform the calculation based on the operator
    if ( operator == '+')
    {
        result = num1 + num2;
        printf("The result of %lf %c %lf is: %lf", num1, operator, num2, result);
    }
    else if (operator == '-')
    {
        result = num1 - num2;
        printf("The result of %lf %c %lf is: %lf", num1, operator, num2, result);
    }
    else if (operator == '*')
    {
        result = num1 * num2;
        printf("The result of %lf %c %lf is: %lf", num1, operator, num2, result);
    }
    else if (operator == '/' && num2 != 0)
    {
        result = num1 / num2;
        printf("The result of %lf %c %lf is: %lf", num1, operator, num2, result);
    }
    else
    // Print the result or an error message for an invalid operator
        printf("Something went wrong!");

    

    return 0;
}