#include<stdio.h>
int main()
{
    char str[100];
    char Search;
    int i;
    printf("Enter any string: ");
    fgets(str,sizeof(str),stdin);
    printf("Enter any character to search: ");
    Search = getchar();
    i=0;
    while(str[i]!='/0')
    {
        if(str[i]==Search)
        {
            printf("'%c' is found at index %d\n",Search,i);
        }
        i++;
    }
    return 0;
}
