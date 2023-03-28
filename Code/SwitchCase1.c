#include<stdio.h>
int main(){
    char grade ='C';
    switch (grade){
        case 'A':
            printf("Excellent");
            break;
        case 'B':
            printf("Good");
            break;
        case 'C':
            printf("Avarage");
            break;
        case 'D':
            printf("Below Avarage");
            break;
        case 'F':
            printf("Fall");
            break;
        default :
            printf("The Grade is Invalid");
        }
        return 0;
}
