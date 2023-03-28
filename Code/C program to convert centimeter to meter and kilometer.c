#include<stdio.h>

int main()
{
    double meter, centimeter, kilometer;

    printf("Enter the length in meter : ");
    scanf("%lf", &centimeter);

    meter = centimeter / 100;
    printf("Your length in meter is : %0.2lf meter\n", meter);

    kilometer = centimeter / 100000;
    printf("Your length in kilometer is : %0.2lf kilometer\n", kilometer);

    return 0;

}
