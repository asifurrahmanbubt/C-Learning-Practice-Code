#include<stdio.h>
int main()
{
    int num;
    printf("Input Your Mark:");
    scanf("%d",&num);
    if(num>=80){
        printf("Your Grading Point is 4.00");
    }
    else if(num>=75&&num<80){
        printf("Your Grading Point is 3.75");
    }
    else if(num>=70&&num<75){
        printf("Your Grading Point is 3.50");
    }
    else if(num>=65&&num<70){
        printf("Your Grading Point is 3.25");
    }
    else if(num>=60&&num<65){
        printf("Your Grading Point is 3.00");
    }
    else if(num>=55&&num<60){
        printf("Your Grading Point is 2.75");
    }
    else if(num>=50&&num<55){
        printf("Your Grading Point is 2.50");
    }
    else if(num>=45&&num<50){
        printf("Your Grading Point is 2.25");
    }
    else if(num>=40){
        printf("Your Grading Point is 2.00");
    }
    else{
        printf("Your Grading Point is 0.00");
    }
    return 0;
}
