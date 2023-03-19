#include<stdio.h>
int main(){
    char lower,upper;
    printf("Enter a lower case letter:  ");
    scanf("%c",&lower);

    upper = toupper(lower);

    printf("The Upper Case is : %c ", upper);

    return 0;
}
