#include<stdio.h>
int main()
{
    int arr[10];
    int i, j, size, count=0;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    printf("\nTotal of duplicate elements found in array = %d", count);

    return 0;
}
