#include<stdio.h>
int main()
{
    int x,y;

    printf("Enter the value of X: ");
    scanf("%d", &x);

    printf("Enter the value of Y: ");
    scanf("%d", &y);

    x=x^y;
    y=x^y;
    x=x^y;

    printf("Swapping the First Number: %d\n", x);
    printf("Swapping the Second Number: %d\n", y);

    return 0;
}
