#include<stdio.h>
int main(){
    char lower;
    printf("Enter the lowercase character: ");
    scanf("%c", &lower);

    printf("The Uppercase character: %c", lower-32);

    return 0;
}
