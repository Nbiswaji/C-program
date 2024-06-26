#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[100],size,i,tosearch,found;
    printf("Enter number of array \n");
    scanf("%d", &size);
    printf("Enter %d elements in the array :", size);
    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &tosearch);
    found = 0;
    for (i = 0; i < size; i++)
        {
            if (arr[i] == tosearch)
            {
                found = 1;
                break;
            }
        }
    if (found == 1) {
        printf("%d is found at position %d\n", tosearch, i + 1);
    } else {
        printf("%d is not found in the array\n", tosearch);
    }
}
