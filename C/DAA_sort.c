#include <stdio.h>
#include <stdlib.h>
void bubble_sort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
void selection_sort(int a[], int n)
{
    int i, j, temp, min;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] > a[min])
            {
                min = j;
            }
        }
        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
}
void insertion_sort(int a[], int n)
{
    int i, j, temp, curr;
    for (i = 1; i < n; i++)
    {
        curr = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > curr)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = curr;
    }
}
int main()
{
    int x, size;
    int a[20], i;
    while (1)
    {
        printf("\n1:Input \n2:Display\n3:bubble_asc\n4:selection_desc\n5:insertion_asc\n9:exit\n");
        printf("enter your choice\n");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            printf("enter the size of the array\n");
            scanf("%d", &size);
            printf("enter the element\n");
            for (i = 0; i < size; i++)
            {
                scanf("%d", &a[i]);
            }
            break;
        case 2:
            printf("the element of the array are\n");
            for (i = 0; i < size; i++)
            {
                printf("%d\t", a[i]);
            }
            break;
        case 3:
            printf("the array in the sorted ascending form is \n");
            bubble_sort(a, size);
            for (i = 0; i < size; i++)
            {
                printf("%d\t", a[i]);
            }
            printf("\n");
            break;
        case 4:
            printf("the array in the sorted descending form is \n");
            selection_sort(a, size);
            for (i = 0; i < size; i++)
            {
                printf("%d\t", a[i]);
            }
            printf("\n");
            break;
        case 5:
            insertion_sort(a, size);
            for (i = 0; i < size; i++)
            {
                printf("%d\t", a[i]);
            }
            printf("\n");
            break;
        case 9:
            exit(9);
            break;
        default :
            printf("Incorrect choice \n");
        }
    }

    return 0;
}
