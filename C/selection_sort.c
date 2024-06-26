#include<stdio.h>
void selectsort(int[],int);
int main()
{
    int a[30],n,i;
    printf("Enter the size of array :\n");
    scanf("%d", &n);
    printf("Enter the element :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    selectsort(a,n);
    printf("After selection sort :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

}
void selectsort(int ar[],int size)
{
    int i,min,j,temp;
    for(i=0;i<size-1;i++)
    {
        min = i;
        for(j=i+1;j<size;j++)
            if(ar[min]<ar[j])
        {
            min = j;
        }
        temp=ar[i];
        ar[i]=ar[min];
        ar[min]=temp;
    }
}
