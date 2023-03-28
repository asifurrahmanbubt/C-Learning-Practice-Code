#include<stdio.h>

int main()
{
    int a, b, addition, subtraction, multiplication, division, modulus;

    printf("Enter the value of 1st number :");
    scanf("%d", &a);

    printf("Enter the value of 2nd number:");
    scanf("%d", &b);

    addition = a + b;
    printf("The Addition of the two numbers are : %d\n", addition);

    subtraction = a - b;
    printf("The Subtraction of the two numbers are : %d\n", subtraction);

    multiplication = a * b;
    printf("The Multiplication of the two numbers are : %d\n", multiplication);

    division = a / b;
    printf("The Division of the two numbers are : %d\n", division);

    modulus = a % b;
    printf("The Modulus of the two numbers are : %d\n", modulus);

    return 0;

}
