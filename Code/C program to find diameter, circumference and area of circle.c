#include<stdio.h>

int main()
{
    double radius, diameter, circumference, area;

    printf("Enter the Value of Radius of the Circle : ");
    scanf("%lf", &radius);

    diameter = 2 * radius;
    printf("The Diameter of the Circle is : %0.2lf\n", diameter);

    circumference = 2 * 3.1416 * radius;
    printf("The Circumference of the Circle is : %0.2lf\n", circumference);

    area = 3.1416 * radius * radius;
    printf("The Area of the Circle is : %0.2lf\n", area);

    return 0;
}
