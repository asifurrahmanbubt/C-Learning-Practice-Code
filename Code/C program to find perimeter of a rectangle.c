#include<stdio.h>

int main()
{
    double width, length, perimeter;

    printf("Enter the Width of the  Rectangle : ");
    scanf("%lf", &width);

    printf("Enter the Length of the Rectangle : ");
    scanf("%lf", &length);

    perimeter = 2 * (width + length);
    printf("The Perimeter of the Rectangle is : %0.2lf units", perimeter);

    return 0;
}
