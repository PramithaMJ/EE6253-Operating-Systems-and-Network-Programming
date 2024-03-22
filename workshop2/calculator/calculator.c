#include <stdio.h>

double add(double num1, double num2)
{
    return num1 + num2;
}

double subtract(double num1, double num2)
{
    return num1 - num2;
}

double multiply(double num1, double num2)
{
    return num1 * num2;
}

double divide(double num1, double num2)
{
    if (num2 == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
        return 0; 
    }
    return num1 / num2;
}

void display_result(double result)
{
    printf("The result is: %.2lf\n", result);
}

int main()
{
    double num1, num2, result;
    char operator;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = add(num1, num2);
        break;
    case '-':
        result = subtract(num1, num2);
        break;
    case '*':
        result = multiply(num1, num2);
        break;
    case '/':
        result = divide(num1, num2);
        break;
    default:
        printf("Error: Invalid operator '%c' entered.\n", operator);
        return 1; 
    }

    display_result(result);

    return 0;
}
