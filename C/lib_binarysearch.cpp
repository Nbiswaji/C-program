#include<stdio.h>
int binarysearch(int[],int,int,int);
main()
{
	int arr[100],size,i,item,pos;
	printf("\nEnter the size of arr\n");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the value\n");
		scanf("%d",&arr[i]);
	}
	printf("\nElements of arr are:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\nEnter value to search:\n");
	scanf("%d",&item);
	pos = binarysearch(arr,item,0,size-1);
	if(pos == -1)
	{
		printf("\nThe element %d is not present",item);
	}
	else
	{
		printf("\nThe element %d is present at %d index",item,pos);
	}
}
int binarysearch(int arr[],int item,int lower,int higher)
{
	int middle;
	while(lower<=higher)
	{
		middle = (lower + higher)/2;
		if(item == arr[middle])
		{
			return middle;
		}
		else if(item>arr[middle])
		{
			lower = middle+1;
		}
		else
		{
			higher-1;
		}
	}
	return -1;
}