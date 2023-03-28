#include<stdio.h>
int reverseNumber(int num);
int main()
{
    int num,reverse;
    printf("Enter any number: ");
    scanf("%d", &num);
    reverse=reverseNumber(num);
    printf("The reverse of entered number is : %d", reverse);
    return 0;
}
int sum=0,rem;
int reverseNumber(int num)
{
    if(num){
        rem=num%10;
        sum=sum*10+rem;
        reverseNumber(num/10);
    }
    else
        return sum;
    return sum;
}
