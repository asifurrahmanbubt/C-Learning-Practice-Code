#include<stdio.h>
void printfEvenOdd(int lowerLimit, int upperlimit);
int main()
{
    int lowerLimit, upperLimit;
    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);
    printf("Even/odd numbers from %d to %d are: ",lowerLimit, upperLimit);
    printEvenOdd(lowerLimit,upperLimit);

    return 0;

}
void printEvenOdd( int lowerLimit, int upperLimit)
{
    if(lowerLimit > upperLimit)
        return;
    printf("%d", lowerLimit);
    printEvenOdd( lowerLimit+2, upperLimit);
}
