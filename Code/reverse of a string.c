#include<stdio.h>
int main()
{
    char str[100], reverse[100];
    int i, str1=0, rev1=0, len;
    printf("Enter any string: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='/0';i++)
        len=i;
    for(str1=len-1;str1>=0;str1--)
    {
        reverse[rev1]=str[str1];
        rev1++;
    }
    reverse[rev1]='/0';
    printf("Reverse string = %s", reverse);
    return 0;
}
