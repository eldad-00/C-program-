//simple C program (surface area and volume)
/*
Name; Eldad Mwaura 
Reg no;CT101/G/26651/25
Date;25.9.2025
Description;surfaarea and volume 
*/


//main function 
#include <stdio.h>
#define PI 3.14159265358979323846

int main() {
    double radius, height;
    double volume, surface_area;

    // Prompt user for input
    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    // Calculate volume and surface area
    volume = PI * radius * radius * height;
    surface_area = 2 * PI * radius * (radius + height);

    // Display results
    printf("\nCylinder Dimensions:\n");
    printf("Radius: %.2lf\n", radius);
    printf("Height: %.2lf\n", height);
    printf("Volume: %.2lf cubic units\n", volume);
    printf("Surface Area: %.2lf square units\n", surface_area);

    return 0;
}