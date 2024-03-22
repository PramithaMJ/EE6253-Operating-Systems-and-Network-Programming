#include <stdio.h>

int main()
{
    double number;

    // Get input from the user
    printf("Enter a number: ");
    scanf("%lf", &number);

    // Display the number in scientific notation
    printf("Scientific notation: %e\n", number);

    return 0;
}
