#include<stdio.h>
#include<stdlib.h>
int partition(int a[],int l,int h){
    int i,j,pivot,temp;
    pivot=a[h];
    j=l-1;
    for(i=l;i<h;i++){
        if(a[i]<pivot){
            j=j+1;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[j+1];
    a[j+1]=a[h];
    a[h]=temp;
    return j+1;
}
void quicksort(int a[],int l,int h){
    if(l<h){
        int p=partition(a,l,h);
        quicksort(a,l,p-1);
        quicksort(a,p+1,h);
    }
}
int main(){
    int n;
    printf("Enter the number of inputs: ");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) {  
        a[i]=rand()%(10000 + 1);  
    } 
    /*printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }*/
    printf("The list is: \n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    quicksort(a,0,n-1);
    printf("The sorted list is: \n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
}