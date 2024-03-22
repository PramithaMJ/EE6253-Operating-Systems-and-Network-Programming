#include <stdio.h>

int main()
{
    int decimalNumber;

    // Get decimal input from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Convert decimal to hexadecimal and octal
    printf("Decimal %d in hexadecimal: %X\n", decimalNumber, decimalNumber);
    printf("Decimal %d in octal: %o\n", decimalNumber, decimalNumber);

    return 0;
}