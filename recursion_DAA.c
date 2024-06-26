#include<stdio.h>
void merge(int a[],int lb,int mid,int ub)
{
    int i=lb;
    int j=mid+1;
    int k=lb;
    int b[20];
    while(i<=mid&&j<=ub)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else{
            b[k]=a[j];
            j++;
            k++;
        }
    }
        while(j<=ub)
        {
            b[k]=a[j];
            j++;
            k++;
        }
        while(i<=mid)
        {
            b[k]=a[i];
            i++;
            k++;
        }
    for(i=0;i<=ub;i++)
    {
        a[i]=b[i];
    }
 }
 void mergesort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int mid=(lb+ub)/2;
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
int main(){
int i,n;
int a[20];
printf("enter the no. of item you want to enter:\n ");
scanf("%d",&n);
printf("enter the elements of the array:\n ");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
mergesort(a,0,n-1);
printf("the array in sorted form is :\n");
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}
return 0;
}