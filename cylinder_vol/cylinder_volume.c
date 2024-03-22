#include <stdio.h>

// Function to calculate the volume of a cylinder
double calculateCylinderVolume(double radius, double height)
{
    const double pi = 3.14159265359;
    return pi * radius * radius * height;
}

// Function to get user input for radius and height
void getUserInput(double *radius, double *height)
{
    printf("Enter the radius of the cylinder: ");
    scanf("%lf", radius);

    printf("Enter the height of the cylinder: ");
    scanf("%lf", height);
}

int main()
{
    double radius, height;

    // Getting user input
    getUserInput(&radius, &height);

    // Calculating the volume
    double volume = calculateCylinderVolume(radius, height);

    // Outputting the result
    printf("The volume of the cylinder is: %.2lf cubic units\n", volume);

    return 0;
}
