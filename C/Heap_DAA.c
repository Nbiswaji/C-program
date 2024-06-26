
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int length;
int hsize;
void max_heapify(int a[], int i)
{
	int l, r, largest, t;
	l=2*i;
	r=2*i + 1;
	if(l <= hsize && a[l] > a[i])
		largest=l;
	else
		largest=i;
	if(r<=hsize && a[r]>a[largest])
		largest=r;
	if(largest != i)
	{
		t=a[i];
		a[i]=a[largest];
		a[largest]=t;
		max_heapify(a,largest);
	}
}
void build_max_heap(int a[])
{
	int i;
	hsize=length;
	for(i=length/2;i>=1;i--)
	{
		max_heapify(a,i);
	}

}
void Heap_sort(int a[])
{
	int i, t;
	build_max_heap(a);
	for(i=length;i>=2;i--)
	{
		t=a[1];
		a[1]=a[i];
		a[i]=t;
		hsize--;
		max_heapify(a,1);
	}
}
void main()
{
	printf("Please enter the size of the array : ");
	scanf("%d", &length);
	int a[50], i, u, l;
	printf("Entering the elements of the array :- \n");
	for(i=1;i<=length;i++)
	{
		scanf("%d",&a[i]);
	}
	Heap_sort(a);
	printf("your array has been sorted.\n the new array is :-\n");
	for(i=1;i<=length;i++)
	{
		printf(" %d",a[i]);
	}
   
}